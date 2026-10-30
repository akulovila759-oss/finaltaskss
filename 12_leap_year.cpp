// Задача: Високосный год
// Практика code review (2 курс)
// На что смотреть: сложное условие в одну строку; нет пояснения правила
// Файл: 12_leap_year.cpp

#include <iostream>
using namespace std;

int main() {
    int year;
    if(!(cin >> year)) {
        cout << "err";
        return 1;
    }
        bool isDivisibleBy400 = (year % 400 == 0);
        bool isDivisibleBy4 = (year % 4 == 0);
        bool isDivisibleBy100 = (year % 100 == 0);
        
        bool isLeapYear = isDivisibleBy400 || (isDivisibleBy4 && !isDivisibleBy100);

    if (isLeapYear){
        cout << "Да";
    } else {
        cout << "Нет";
    }
    return 0;
}
