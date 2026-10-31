#include <iostream>
#include <iomanip>
#include <windows.h>
#include <ctype.h>
#include <conio.h>
using namespace std;


int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // CHAPTER 2 FULL TASKS

    // float cubicFoot;
    // float gallon;
    // float volume;
    // cubicFoot = 7.481F;
    // std::cin >> gallon;
    // volume = gallon / cubicFoot;
    // std::cout << "Volume: " << volume << std::endl;



    // long years1 = 1990, years2 = 1991, years3 = 1992, years4 = 1993;
    // long death1 = 135, death2 = 7290, death3 = 11300, death4 = 16200;
    // cout << setw(6) << "Events" << setw(9) << "Victims" << endl 
    // << setw(6) << years1 << setw(9) << death1 << endl
    // << setw(6) << years2 << setw(9) << death2 << endl 
    // << setw(6) << years3 << setw(9) << death3 << endl
    // << setw(6) << years4 << setw(9) << death4 << endl;


    // const int agePerson = 10;
    // int moveSpeed;
    // moveSpeed = agePerson * 2;
    // int iq;
    // iq = moveSpeed;
    // --iq;
    // cout << "Age: " << agePerson << endl 
    // << "Move speed: " << moveSpeed << endl
    // << "Brain skills: " << iq << endl;
    

    // cout << "Поставим паруса по ветру,\nИ отдадим себя в объятия волн...\nНаметим путь к рассвету,\nТам мир чудесный мы с тобой найдём!";

    // char letter;
    // cin >> letter;
    // int result = islower(letter);
    // cout << "islower: " << result << endl;
    


    // const float sterlings = 1.487F;
    // const float frank = 0.172F;
    // const float germanMarks = 0.584F;
    // const float yen = 0.00955F;
    // int dollars; 
    //     cout << "Введите сумму в доларах: $";
    //         cin >> dollars;
    // float sterlingsInDollars;
    // float frankInDollars;
    // float germanMarksInDollars;
    // float yenInDollars;
    // sterlingsInDollars = dollars / sterlings;
    // frankInDollars = dollars / frank;
    // germanMarksInDollars = dollars / germanMarks;
    //  yenInDollars = dollars / yen;
    //     cout << left << setw(12) << "Курс" << setw(13) << "Итог" << endl
    //     << setw(12) << sterlings << setw(13) << sterlingsInDollars << endl
    //     << setw(12) << frank << setw(13) << frankInDollars << endl
    //     << setw(12) << germanMarks << setw(13) << germanMarksInDollars << endl
    //     << setw(12) << yen << setw(13) << yenInDollars << endl;


    // int cTemp;
    // int fTemp;
    // cout << "Введите температуру по цельсию: ";
    // cin >> cTemp;
    // fTemp = (cTemp + 32) * 9/5;
    // cout << fTemp;

    
    // int manyPeople;
    // manyPeople = 4892131;
    // cout << "В Москве живет" << setw(20) << setfill('.') << manyPeople << setw(20) << setfill('_') << "Человек" << endl;



    // int a, b, c, d;
    // char dummychar;
    //     cout << "Введите первую дробь:";
    //     cin >> a >> dummychar >> b;
    //         cout << "\nВведите вторую дробь: ";
    //         cin >> c >> dummychar >> d;
    // int firstStep; 
    // int secondStep;
    //     firstStep = a * d + b * c;
    //     secondStep = b * d;
    // cout << "Сумма равна: " << firstStep << "/" << secondStep << endl;


    // int pounds;
    // int sheelings;
    // int pence;
    // char dummychar;

    //         // 1 фунт = 20 шиллингов = 240 пенсов
    //         // 1 шиллинг = 12 пенсов
    
    //     cout << "Введите сумму в старом формате (например, 5.2.8): ";
    //     cin >> pounds >> dummychar >> sheelings >> dummychar >> pence;
    //     int totalPenceOld = pounds * 240 + sheelings * 12 + pence;

    //     double demicalPounds = totalPenceOld / 240.0;
        
    //     int newPounds = (int)demicalPounds;
    //     int newPence = (int)((demicalPounds - newPounds) * 100 / 0.5);

    //     cout << "Сумма в новом формате: £" << newPounds << "." << newPence << endl;


    // cout << setiosflags(ios::left) << setw(15) << "Фамилия" << setw(15) << "Имя" << setw(18) << "Адрес" << setw(18) << "Город" << endl;
    // cout << "-----------------------------" << endl;
    // cout << setiosflags(ios::left) << setw(15) << "Петров" << setw(15) << "Василий" << setw(18) << "Кленовая 16" << setw(18) << "Санкт-Петербур" << endl;
    

    //ЕБАЛ Я В РОТ ЭТУ ХУЙНЮ


                                        // CHAPTER 3
    
    // int number;
    // cout << "Введи число: ";
    // cin >> number;

    // for(int i = 1; i <= 20; i++ )

    //     for(int j = 1; j <= 10; j++){

    //         int result = i * j * number;
    //         cout << setw(6) << result;
    //     }

    //     cout << endl;




    // float tempC;
    // float tempF;
    // int num;
    // while(true){
    // cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта, 2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
    // cin >> num;
    // if(num == 1 || num == 2){
    //     break;  
    // }
    // cout << "Ошибка!" << endl;
    // }
    // if(num == 1){
    //     cout << "Введите температуру по Цельсия: ";
    //     cin >> tempC;
    //     tempF = (tempC * 1.8) +32;
    //     cout << "Температура по Фаренгейту: " << tempF << endl;
    // }
    // else{
    //     cout << "Введите температуру по Фаренгейту: ";
    //     cin >> tempF;
    //     tempC = (tempF - 32) / 1.8;
    //     cout << "Температура по Цельсия" << tempC << endl;
    //     }
    //     return(0);

    // float firstNum;
    // float secondNum;
    // char operation;
    // float result;
    // while(true){
    //     char key = getche();
    //     if (key == 27)
    //         cout << "Выход из программы";
    //         break;
    // }
    // cout << "Введите первый операнд, операцию и второй операнд: ";
    // cin >> firstNum >> operation >> secondNum;
    // if(operation == '+'){
    // result = firstNum + secondNum;
    // }
    // else if(operation == '-'){
    //         result = firstNum - secondNum;
    // }
    // else if(operation == '*'){
    //         result = firstNum * secondNum;
    // }
    // else if(operation == '/'){
    //         if(secondNum == 0){
    //             cout << "На 0 делить нельзя!" << endl;
    //                 continue;
    //                 }
    //             result = firstNum / secondNum;
    //             }
    // cout << firstNum << operation << secondNum << " = " << result;
    



    
 

}