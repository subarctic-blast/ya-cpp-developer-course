/* Урок 7: Ходим по кругу — цикл for
 *
 * Задание 1
 *
 * В переменной some_vector хранится вектор чисел int. Сохраните их квадраты в вектор squares. Не меняйте порядок
 * элементов.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::vector<int> some_vector = {1, 2, 3, 4, 5};
    std::vector<int> squares;

    for (const auto& e : some_vector) {
        squares.push_back(e * e);
    }

    return 0;
}
