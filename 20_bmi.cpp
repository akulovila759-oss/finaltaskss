// Задача: Индекс массы тела
// Практика code review (2 курс)
// На что смотреть: магические пороги BMI; имена h/w/i; формула без скобок-ясности
// Файл: 20_bmi.cpp

#include <iostream>
using namespace std;

int main() {
    double high, weight;
    cin >> high >> weight;
    
    double BMI_UNDERWEIGHT_THRESHOLD = 18.5;
    double BMI_OVERWEIGHT_THRESHOLD = 25;
    double BMI_OBESE_THRESHOLD = 30;
   
    double bmi = weight / (high * high);
    
    if (bmi < BMI_UNDERWEIGHT_THRESHOLD) {
        cout << "under" << endl;
    } else if (bmi >= BMI_UNDERWEIGHT_THRESHOLD && bmi < BMI_OVERWEIGHT_THRESHOLD) {
        cout << "norm" << endl;
    } else if (bmi >= BMI_OVERWEIGHT_THRESHOLD && bmi < BMI_OBESE_THRESHOLD) {
        cout << "over" << endl;
    } else {
     cout << "obese" << endl;
    }
     return 0;
}
