#include <iostream>
using namespace std;

int main() {
    const int MAX_BALL = 100;
    const int THRESHOLD_A = 90;
    const int THRESHOLD_B = 80;
    const int THRESHOLD_C = 70;
    const int THRESHOLD_D = 60;

    int ball;
    cin >> ball;

    if (ball < 0 || ball > MAX_BALL) {
        cout << "Некорректный балл" << endl;
        return 1;
    }

    char grade;
    if (ball >= THRESHOLD_A)      grade = 'A';
    else if (ball >= THRESHOLD_B) grade = 'B';
    else if (ball >= THRESHOLD_C) grade = 'C';
    else if (ball >= THRESHOLD_D) grade = 'D';
    else                          grade = 'F';

    cout << grade << endl;
    return 0;
}