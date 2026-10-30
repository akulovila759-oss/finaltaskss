// Задача: Минимум из трёх
// Практика code review (2 курс)
// На что смотреть: избыточная вложенность if; можно упростить
// Файл: 16_min_of_three.cpp

#include <iostream>
using namespace std;

int main() {
    int firstNum, secondNum, thirdNum;
    cin >> firstNum >> secondNum >> thirdNum;
    int minimum;
    if (firstNum < secondNum && firstNum < thirdNum) {
            minimum = firstNum;
    } else {
        if (secondNum < thirdNum) {
            minimum = secondNum;
        } else {
            minimum = thirdNum;
        }
    }
    cout << minimum << endl;
    return 0;
}
