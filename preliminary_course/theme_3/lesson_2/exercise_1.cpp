/* Урок 2: else и else if
 *
 * Задание 1
 *
 * В предыдущем уроке вы написали программу, которая находит числа по их сумме и произведению. Модифицируйте её: если
 * решения не найдены, программа должна выводить сообщение об этом.
 */

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double x, y;
    std::cin >> x >> y;
    double D = x * x - 4 * y;
    if (D >= 0) {
        double sqrtD = std::sqrt(D);
        double b = (x + sqrtD) / 2;
        double a = x - b;
        std::cout << a << " + "s << b << " = "s << x << std::endl;
        std::cout << a << " * "s << b << " = "s << y << std::endl;
    } else {
        std::cout << "No numbers with sum "s << x << " and product "s << y << std::endl;
    }
    std::cout << "Solving complete"s << std::endl;
    return 0;
}
