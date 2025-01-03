/* Урок 4: Запятые тоже любят плавать
 *
 * Задание 1
 *
 * Стороны треугольника заданы в переменных a, b, c. Напишите программу, которая вычисляет площадь треугольника и
 * выводит фразу S = , а после неё — полученное значение.
 */

#include <iostream>
#include <cmath>

using namespace std;

double a = 3;
double b = 4;
double c = 5;

int main() {
    double p = (a + b + c) / 2;
    std::cout << "S = "s << std::sqrt(p * (p - a) * (p - b) * (p - c)) << std::endl;
    return 0;
}
