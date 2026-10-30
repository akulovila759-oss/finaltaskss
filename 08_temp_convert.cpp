// Задача: Перевод температуры
// Практика code review (2 курс)
// На что смотреть: магические 32 и 1.8; имена t1/t2; смешение float/double
// Файл: 08_temp_convert.cpp

#include <iostream>
using namespace std;

int main() {
    const double FAHRENHEIT_OFFSET = 32.0;
    const double FAHRENHEIT_TO_CELSIUS_DIVISOR = 1.8;
    double fahrenheit = 0.0;

    cout << "Enter the temperature in Fahrenheit: ";
    if(!(cin >> fahrenheit)){
        cout << "Введите температуру";
        return 1;
    }
    double celsius = (fahrenheit - FAHRENHEIT_OFFSET) / FAHRENHEIT_TO_CELSIUS_DIVISOR;
    cout << celsius << endl;
    return 0;
}
