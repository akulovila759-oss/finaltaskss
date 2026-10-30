// Задача: N-е число Фибоначчи
// Практика code review (2 курс)
// На что смотреть: плохо читаемые a/b/c; особые случаи размазаны
// Файл: 14_fibonacci_n.cpp

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if(num <= 0){
        cout << "err";
        return 1;
    }

    int prev = 0, curr = 1, next = 0;

    if (num == 1) { cout << prev << endl; return 0; }
    if (num == 2) { cout << curr << endl; return 0; }
        for (int i = 3; i <= num; i++) {
        curr = prev + next;
        prev = curr;
        next = curr;
    }
    cout << curr << endl;
    return 0;
}
