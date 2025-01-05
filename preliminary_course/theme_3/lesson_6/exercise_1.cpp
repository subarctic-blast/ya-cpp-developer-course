/* Урок 6: Продвинутый вектор
 *
 * Задание 1
 *
 * Выведите последний элемент вектора some_vector либо строку "empty", если вектор пуст
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::vector<int> some_vector = {1, 2, 3};

    if (!some_vector.empty()) {
        std::cout << some_vector[some_vector.size() - 1] << std::endl;
    } else {
        std::cout << "empty"s << std::endl;
    }
}
