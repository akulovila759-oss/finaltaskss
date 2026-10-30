// Задача: Число-палиндром
// Практика code review (2 курс)
// На что смотреть: дублирование логики разворота; неочевидные имена
// Файл: 15_palindrome_num.cpp

#include <iostream>

int main() {
    long long input_number;
    std::cin >> input_number;

    if (input_number < 0) {
        std::cout << "no" << std::endl;
        return 0;
    }

    long long original_number = input_number;
    long long reversed_number = 0;

    while (input_number > 0) {
        reversed_number = reversed_number * 10 + input_number % 10;
        input_number /= 10;
    }

    if (original_number == reversed_number) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
