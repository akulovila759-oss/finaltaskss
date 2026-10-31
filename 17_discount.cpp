// Задача: Скидка в магазине
// Практика code review (2 курс)
// На что смотреть: магические проценты; повторяющиеся cout; неочевидные пороги
// Файл: 17_discount.cpp

#include <iostream>
using namespace std;

int main() {
    double price;
    const double DISCOUNT1 = 5000.0;
    const double DISCOUNT2 = 2000.0;
    const double PERCENT1 = 0.15;
    const double PERCENT2 = 0.1;
    cin >> price;
    double final_sum;
    if (price >= DISCOUNT1) {
        final_sum = price - price * PERCENT1;
    } else if (price >= DISCOUNT2 && price < DISCOUNT1) {
        final_sum = price - price * PERCENT2;
    } else {
        final_sum = price;
    }
    cout << final_sum << endl;
    return 0;
}
