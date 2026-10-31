// Задача: Подсчёт цифр в числе
// Практика code review (2 курс)
// На что смотреть: цикл while неочевиден; изменение входного значения; имя cnt
// Файл: 10_count_digits.cpp

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    if(!(cin >> x)) {
        cout << "err";
        return 1;
    }
    int digitsCount = 0;
    
    int temp = abs(x);
    
    do { 
        digitsCount++
        temp /= 10;
    } while(temp > 0);


    cout << digitsCount << endl;
    return 0;
}
