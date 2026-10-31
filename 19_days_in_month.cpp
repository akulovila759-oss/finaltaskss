// Задача: Число дней в месяце
// Практика code review (2 курс)
// На что смотреть: длинный список if; год не учитывается для февраля аккуратно
// Файл: 19_days_in_month.cpp

#include <iostream>
using namespace std;

int main() {
    int month, year;
    cin >> month >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    int days = 0;

    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
            
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        
        case 2:
            days = isLeapYear ? 29:28;
            break;

        default:
            cout << "Invalid month";
            return 1;
    }
    
    cout << days;
}
