// Задача: Таблица умножения
// Практика code review (2 курс)
// На что смотреть: магическое 10; вложенные циклы без пояснений; вывод в одну кучу
// Файл: 07_mult_table.cpp

#include <iostream>
using namespace std;


int main() {
    int max;
    if(!(cin >> max || max <= 0)){
        cout << "error";
        return 1;
    }

    for (int i = 1; i <= max; i++) {
        for (int j = 1; j <= max; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}
