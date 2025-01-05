/* Урок 7: Ходим по кругу — цикл for
 *
 * Задание 5
 *
 * Переменная some_vector хранит вектор чисел int. Постройте таблицу умножения для этих чисел.
 * Если в some_vector находится N чисел, то выведите N строк, в каждой строке по N чисел, разделённых пробелами. В конце
 * каждой строки допустим пробел.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::vector<int> some_vector = {10, -2, 5, -42};

    for (const auto& x : some_vector) {
        for (const auto& y : some_vector) {
            std::cout << x * y << " "s;
        }
        std::cout << std::endl;
    }

    return 0;
}
