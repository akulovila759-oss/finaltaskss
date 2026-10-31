#include <iostream>
#include <algorithm> // Для std::max

using namespace std;

int main() {
    int x1, x2, x3, x4, x5;
    if (std::cin >> x1 >> x2 >> x3 >> x4 >> x5) {
        int m = max({x1, x2, x3, x4, x5});
        cout << m << endl;
    } else {
        std::cerr << "Ошибка ввода!" << endl;
        return 1;
    }
    return 0;
}
