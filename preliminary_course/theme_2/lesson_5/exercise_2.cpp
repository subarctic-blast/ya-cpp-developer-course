/* Урок 5: Ввод данных
 *
 * Задание 2
 *
 * Разработайте калькулятор. Он должен читать два числа double и выполнять над ними следующие операции:
 *  сложение,
 *  вычитание,
 *  умножение,
 *  деление.
 * Результаты выводятся на экран.
 */

#include <iostream>

using namespace std;

int main() {
    cout << "Enter x and y:"s << endl;
    double x, y;
    std::cin >> x >> y;
    std::cout << "x + y = "s << x + y << std::endl;
    std::cout << "x - y = "s << x - y << std::endl;
    std::cout << "x * y = "s << x * y << std::endl;
    std::cout << "x / y = "s << x / y << std::endl;
    return 0;
}
