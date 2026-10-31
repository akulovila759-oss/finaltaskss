#include <iostream> // для cout и т. п.
#include <windows.h>
#include <iomanip> // для setw()
#include <cmath> // для sqrt()
#include <string>
#include <conio.h> // для getche()
using namespace std;



int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
//     char charvar1 = 'A'; // символьная переменная
// // со значением 'A'
//     char charvar2 = '\t'; // символьная переменная со значением символа табуляции
// cout << charvar1; // вывод переменной на экран
// cout << charvar2; // вывод переменной на экран
// charvar1 = 'B'; // присваивание константного
// // значения символьной
// // переменной
// cout << charvar1; // вывод переменной на экран
// cout << '\n'; // переход на следующую строку
//     return 0;





    // cout << "\"Ну все, мы полетели\", сказала она.";











//     int ftemp; // температура по Фаренгейту
// cout << "Введите температуру по Фаренгейту: ";
// cin >> ftemp;
// int ctemp = (ftemp - 32) * 5 / 9;
// cout << "Температура no Цельсию равна " << ctemp << '\n';
// return 0;




// float rad; // переменная вещественного типа
// const float PI = 3.14159F; // вещественная константа
//     cout << "Введите радиус окружности: "; // запрос
//         cin >> rad; // получение радиуса
// float area = PI * rad * rad; // вычисление площади круга
//     cout << "Площадь круга равна " << area << endl; // вывод результата на экран
//     return 0;




// long pop1 = 4789426, pop2 = 274124, pop3 = 9761;
// cout << setw(9) << "Город" << setw(12)
// << "Население" << endl
// << setw(9) << "Москва" << setw(12) << pop1 << endl
// << setw(9) << "Киров" << setw(12) << pop2 << endl
// << setw(9) << "Угрюмовка" << setw(12) << pop3 << endl;
// return 0;









// int signedVar = 1500000000; // знаковая переменная
// unsigned int unsignVar = 1500000000; // беззнаковая переменная
// signedVar = (signedVar * 2) / 3; // выход за границы диапазона
// unsignVar = (unsignVar * 2) / 3; // вычисления внутри диапазона
// cout << "Знаковая переменная равна " << signedVar << endl; // ошибка
// cout << "Беззнаковая переменная равна " << unsignVar << endl; // правильно
// return 0;





// int count = 7;
// float avgWeight = 155.5F;
// double totalWeight = count * avgWeight;
// cout << "Вес равен " << totalWeight << endl;
// return 0;


// int intVar = 1500000000; // 1 500 000 000
// intVar = (intVar * 10) / 10; // слишком большой результат
// cout << "Значение intVar равно " << intVar << endl; // неверный результат
// intVar = 1500000000;
// intVar = (static_cast<double>(intVar) * 10) / 10; // приведение к типу double
// cout << "Значение intVar равно " << intVar << endl; // верный результат
// return 0;







// int ans = 27;
// ans += 10; // то же самое, что ans = ans + 10;
// cout << ans << ", ";
// ans -= 7; // то же самое, что ans = ans - 7;
// cout << ans << ", ";
// ans *= 2; // то же самое, что ans = ans * 2;
// cout << ans << ", ";
// ans /= 3; // то же самое, что ans = ans / 3;
// cout << ans << ", ";
// ans %= 3; // то же самое, что ans = ans % 3;
// cout << ans << endl;
// return 0;

// ++count; // увеличение count на 1


// int count = 10;
// cout << "count = " << count << endl; // вывод числа 10
// cout << "count = " << ++count << endl; // вывод числа 11 (префиксная форма)
// cout << "count = " << count << endl; // вывод числа 11
// cout << "count = " << count++ << endl; // вывод числа 11 (постфиксная форма)
// cout << "count = " << count << endl; // вывод числа 12
// return 0;





// double number, answer; // аргументы типа double для функции sqrt()
// cout << "Введите число: ";
// cin >> number; // ввод числа
// answer = sqrt(number); // извлечение корня
// cout << "Квадратный корень равен " << answer << endl; // вывод результата
// return 0;


// int george = 10;
//     cout << setw(10) << george;

// int temp;
// cin >> temp;
// cout << endl << temp;



    // cout << 11 % 3;

    

    // temp += 23; // Оператор, увеличивающий temp на 23 с присваиванием:


    




    // relat.cpp
// применение операций отношения

//     int numb;
//     cout << "Введите число: ";
//     cin >> numb;
//     cout << "numb < 10 равно " << (numb < 10) << endl;
//     cout << "numb > 10 равно " << (numb > 10) << endl;
//     cout << "numb == 10 равно " << (numb == 10) << endl;
//     return 0;




    // int j;
    //     for(j = 0; j < 15; j++)
    //         cout << j * j << " ";
    //     cout << endl;
    // return 0;



    // int numb;
    // for(numb = 1; numb <= 10; numb++)
    // {
    //     cout << setw(4) << numb;
    //     int cube = numb * numb * numb;
    //     cout << setw(6) << cube << endl;
    // }

    // string name;

    // cout << "Напишите свое имя: ";
    // getline(cin, name);

    // cout << "Привет " << name << endl;

    // unsigned int numb;
    // unsigned long fact = 1;
    // cout << "Введите целое число: ";
    // cin >> numb;
    //     for(int j = numb; j > 0; j--)
    //         fact *= j;
    //         cout << fact;


    // int n = 99;
    // while(n != 0)
    //     cin >> n;
    // cout << endl;



    // int pow = 1;
    // int numb = 1;
    //     while(pow != 10000)
    //         {
    //             cout << setw(2) << numb;
    //             cout << setw(5) << pow << endl;
    //             ++numb;
    //             pow = numb * numb * numb * numb;
    //         }



    // const unsigned long limit = 4294967295;
    // unsigned long next = 0;
    // unsigned long last = 1;

    // while(next < limit / 2)
    //     {
    //         cout << last << " ";
    //         long sum = next + last;
    //         next = last;
    //         last = sum;
    //     }   
    //     cout << endl;



    // long dividend, divisor;
    // char ch;

    // do
    // {
    //     cout << "Введите делимое: "; cin >> dividend;
    //     cout << "Введите делитель: "; cin >> divisor;
    //     cout << "Частное равно: " << dividend / divisor << endl;
    //     cout << "Остаток равен: " << dividend % divisor << endl;
    //     cout << "Еще раз?(y/n): ";
    //     cin >> ch;
    // }
    //     while(ch != 'n');
    //     return 0;


    // int x;
    // cout << "Введите число: ";
    // cin >> x;

    //     if(x > 100)
    //         cout << "Это число больше 100";
    //     else
    //         cout << "Это чилсло меньше 100";
    //     return 0;



    // unsigned long n, j;
    // cout << "Введите число: ";
    // cin >> n;

    // for(j = 2; j <= n / 2; j++)
    //     if(n % j == 0)
    //         {
    //             cout << "Число не простое: делится на " << j << endl;
    //             exit(0);
    //         }
    // cout << "Число является простым\n";
    // return 0;


    // int chcount = 0; 
    // int wdcount = 1;
    // char ch = 'a';

    // cout << "Введите строку: ";  
    // while(ch != '\r')
    // {
    //     ch = getche();
    //     if(ch == ' ')
    //         wdcount++;
    //     else
    //         chcount++;
    // }
    // cout << "\nСлов: " << wdcount << endl;
    // cout << "Букв: " << (chcount - 1) << endl;
    // return 0;


    //  char dir = 'a';
    //  int x = 10, y = 10;
    //  cout << "\nНажмите Enter чтобы выйти... " << endl;
    //      while(dir != '\r'){
    //          cout << "Ваши координаты: " << x << ", " << y << endl;
    //          dir = getche();
    //              if(dir == 'n'){
    //                  y--;
    //                  }
    //                     else
    //                      if(dir == 's'){
    //                          y++;
    //                          }
    //                          else
    //                             if(dir == 'w'){
    //                               x--;
    //                               }
    //                               else
    //                                  if(dir == 'e'){
    //                                     x++;
            //  }



            // int speed;
            // cout << "Введите скорость 33, 45 или 85" << endl;
            // cin >> speed;
            // switch(speed)
            //     {
            //         case 33:
            //             cout << "Долгоиграющий формат" << endl;
            //             break;
            //         case 45:
            //             cout << "Сингл формат" << endl;
            //             break;
            //         case 85:
            //             cout << "Устаревший формат" << endl;
            //             break;
            //     }





}


