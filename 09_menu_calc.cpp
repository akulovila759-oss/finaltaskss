// Задача: Меню калькулятора
// Практика code review (2 курс)
// На что смотреть: длинный switch без default-логики; повтор вывода; плохие имена
// Файл: 09_menu_calc.cpp

#include <iostream>
using namespace std;

int main() {
    int operation;

    double num1, num2;
    cin >> operation >> num1 >> num2;
    if (operation == 1) cout << num1 + num2 << endl;
    if (operation == 2) cout << num1 - num2 << endl;
    if (operation == 3) cout << num1 * num2 << endl;
    if (operation == 4) {
        if (num2 != 0) cout << num1 / num2 << endl;
        else cout << "err" << endl;
    }
    if (operation < 1 || operation > 4) cout << "err" << endl;
    return 0;

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
