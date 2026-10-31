// Задача: Сумма цифр числа
// Практика code review (2 курс)
// На что смотреть: мутация n; однобуквенные имена; while без структуры
// Файл: 13_sum_digits.cpp

#include <iostream>
using namespace std;

int main() {
int orgNum , sum = 0;
cin >> orgNum;
int num = orgNum;
if ( num < 0 ){
    num = -num;
}

while(num != 0){
    sum += num % 10;
    num /= 10;
}
cout << sum << endl;
return 0;
}
