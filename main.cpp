#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand((unsigned)time(NULL));

    int secret = rand() % 100 + 1;
    int guess;
    int attempts = 5;

    cout << "===== 猜数字小游戏 =====" << endl;

    while (attempts > 0) {
        cout << "请输入数字 (1-100): ";
        cin >> guess;

        if (guess == secret) {
            cout << "猜对了！" << endl;
            break;
        }

        if (guess > secret)
            cout << "太大了！" << endl;
        else
            cout << "太小了！" << endl;

        attempts--;
        cout << "剩余次数: " << attempts << endl;
    }

    if (attempts == 0)
        cout << "游戏结束，答案是: " << secret << endl;

    return 0;
}
