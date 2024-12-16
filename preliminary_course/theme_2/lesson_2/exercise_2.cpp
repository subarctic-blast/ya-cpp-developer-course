/* Урок 2: Числа
 *
 * Задание 2
 *
 * Разработайте программу для вывода информации о целом числе: между какими числами оно находится и чему оно равно в
 * удвоенном виде. Само число хранится в переменной x типа int.
 */

#include <iostream>

using namespace std;

int x = 100;

int main() {
    int y = x - 1;
    int z = x + 1;
    int t = 2 * x;

    std::cout << "Number "s << x << " is between "s << y << " and "s << z << ". Doubled "s << x << " is "s << t << "."s << std::endl;

    return 0;
}
