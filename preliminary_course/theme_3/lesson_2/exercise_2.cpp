/* Урок 2: else и else if
 *
 * Задание 2
 *
 * Разработайте калькулятор, который будет вычислять одну из заданных операций:
 *
 *  сложение (+),
 *  вычитание (-),
 *  умножение (*),
 *  деление (/).
 *
 * Через cin нужно считать оба числа и операцию.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    double x, y;
    std::string op;
    std::cin >> x >> op >> y;
    if ("+"s == op) {
        std::cout << "= "s << x + y << std::endl;
    } else if ("-"s == op) {
        std::cout << "= "s << x - y << std::endl;
    } else if ("*"s == op) {
        std::cout << "= "s << x * y << std::endl;
    } else if ("/"s == op) {
        if (0 != y) {
            std::cout << "= "s << x / y << std::endl;
        } else {
            std::cout << "Division by zero"s << std::endl;
        }
    } else {
        std::cout << "Unknown operation: "s << op << std::endl;
    }
    return 0;
}
