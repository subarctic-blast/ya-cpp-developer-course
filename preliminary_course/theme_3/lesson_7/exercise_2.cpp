/* Урок 7: Ходим по кругу — цикл for
 *
 * Задание 2
 *
 * В переменной some_vector хранится вектор строк. Выведите его элементы через запятую.
 * Переводить строку после каждого элемента не нужно. В этой задаче выводы в cout не требуют endl. Он нужен лишь в
 * конце.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    std::vector<std::string> some_vector = {"one"s, "two"s, "three"s, "four"s, "five"s};

    bool is_first = true;
    for (const auto& e : some_vector) {
        if (!is_first) {
            std::cout << ", "s;
        }
        is_first = false;

        std::cout << e;
    }
    std::cout << std::endl;

    return 0;
}
