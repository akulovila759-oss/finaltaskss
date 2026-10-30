// Задача: Меню калькулятора
// Практика code review (2 курс)
// На что смотреть: длинный switch без default-логики; повтор вывода; плохие имена
// Файл: 09_menu_calc.cpp

#include <iostream>
using namespace std;

int main() {
    int operation;
    double firstNum, secondNum;
    if(!(cin >> operation >> firstNum >> secondNum)) {
        return 1;
    }
    double result = 0;
    bool isResult = true;

    switch(operation){
        case 1:
            result = firstNum + secondNum;
            break;
        case 2:
            result = firstNum - secondNum;
            break;
        case 3:
            result = firstNum * secondNum;
            break;
        case 4:
            if(secondNum != 0)
                result = firstNum / secondNum;
            else
                isResult = false;
                break;
    }
    if (isResult){
        cout << result;
    }
    else {
        cout << "err";
    }
}
