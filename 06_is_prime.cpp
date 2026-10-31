// Задача: Проверка простого числа
// Практика code review (2 курс)
// На что смотреть: глубокая вложенность; флаг flag; неочевидная логика
// Файл: 06_is_prime.cpp

#include <iostream>
using namespace std;

int main() {
    int num;
    if(!(cin >> num)){
        cout << "error";
    }

    if(num <= 1){
        cout << "not"; 
    }

    
    for(int i = 2; i * i < num; i++) {
         if (num % i == 0) {
            cout << "not";
            return 0;
            }
    }
    cout << "prime" << endl;
       
    return 0;
    }
