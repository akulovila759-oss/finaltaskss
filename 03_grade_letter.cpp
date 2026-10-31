// Задача: Оценка по баллам
// Практика code review (2 курс)
// На что смотреть: лестница if без else if; магические пороги; копипаста сообщений
// Файл: 03_grade_letter.cpp

#include <iostream>
using namespace std;

int main() {
    int ball;
    const int threshold_A = 90;
    const int threshold_B = 80;
    const int threshold_C = 70;
    const int threshold_D = 60;
    cin >> ball;
    char ground;
    if (ball >= threshold_A) ground = 'A';
    else if (ball >= threshold_B) ground = 'B';
    else if (ball >= threshold_C) ground = 'C';
    else if (ball >= threshold_D) ground = 'D';
    else ground = 'F';
    cout << ground << endl;
    return 0;
}
