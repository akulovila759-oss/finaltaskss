// Задача: Проверка длины пароля
// Практика code review (2 курс)
// На что смотреть: магические 8 и 16; сравнение char-массива посимвольно вручную почти
// Файл: 18_password_len.cpp

#include <iostream>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    string password;
    const int minimumLen = 8;
    const int maximumLen = 16;
    
    cin >> password;
    
    size_t passwordLenght = password.length();
    
    if (passwordLenght < minimumLen) { 
        cout << "short" << endl;
    } else if (passwordLenght > maximumLen) {
        cout << "long" << endl;
    } else {
        cout << "ok" << endl;
    }
         return 0;
}
