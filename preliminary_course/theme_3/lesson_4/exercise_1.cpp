/* Урок 4: Ставим условия
 *
 * Задание 1
 * Напишите программу, которая определяет вид треугольника по его сторонам.
 * Определите вид треугольника, зная его стороны.
 *
 *     Если все три стороны равны, то есть треугольник равносторонний, выведите фразу equilateral triangle.
 *     Если только две стороны треугольника совпадают, выведите фразу isosceles triangle.
 *     В других случаях выведите common triangle.
 *
 * Проверьте, что выполнено неравенство треугольника: каждая сторона должна быть строго меньше, чем сумма двух других.
 * Если это неверно, выведите фразу incorrect triangle.
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (!(a < b + c) || !(b < a + c) || !(c < a + b)) {
        std::cout << "incorrect triangle"s << std::endl;
    } else if (a == b && b == c) {
        std::cout << "equilateral triangle"s << std::endl;
    } else if (a == b || b == c || c == a) {
        std::cout << "isosceles triangle"s << std::endl;
    } else {
        std::cout << "common triangle"s << std::endl;
    }

    return 0;
}
