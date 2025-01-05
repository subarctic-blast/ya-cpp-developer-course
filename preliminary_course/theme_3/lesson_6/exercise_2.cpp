/* Урок 6: Продвинутый вектор
 *
 * Задание 2
 *
 * Вектор some_vector содержит от нуля до четырёх значений, а вектор reversed_vector — ни одного. Перенесите элементы из
 * вектора some_vector в reversed_vector. В reversed_vector они должны расположиться в обратном порядке.
 */

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void Print(const std::vector<T>& v) {
    for (const auto& e : v) {
        std::cout << e << " "s;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> some_vector = {1, 2, 3};
    std::vector<int> reversed_vector = {};

    Print(some_vector);
    Print(reversed_vector);

    while (!some_vector.empty()) {
        reversed_vector.push_back(some_vector.back());
        some_vector.pop_back();
    }

    Print(some_vector);
    Print(reversed_vector);
}
