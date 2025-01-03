/* Урок 1: Если и только если
 *
 * Задание 2
 *
 * Напишите программу, находящую пару чисел по их сумме и произведению. Она читает два числа x и y типа double и
 * находит числа a и b типа double, для которых выполнены равенства: x=a+b, y=a×b.
 * Если программа нашла нужные числа, то она выводит их в соответствии с форматом вывода.
 * В конце выводится фраза Solving complete.
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
    }
    std::cout << "Solving complete"s << std::endl;
    return 0;
}
