/* Урок 7: Ходим по кругу — цикл for
 *
 * Задание 3
 *
 * В переменной some_vector хранится вектор чисел int. Посчитайте и выведите количество чётных чисел среди них.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    std::vector<int> some_vector = {1, 3, 8, 15, 0, 3, 1, 2, 2, 2};

    int even_count = 0;
    for (const auto& e : some_vector) {
        if (0 == e % 2) {
            ++even_count;
        }
    }
    std::cout << even_count << std::endl;

    return 0;
}
