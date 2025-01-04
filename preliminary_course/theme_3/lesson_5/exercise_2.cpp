/* Урок 5: Храним по-новому: vector
 *
 * Задание 2
 *
 * Дан вектор five_nums из пяти чисел типа int. Переставьте его элементы так, чтобы они шли в обратном порядке.
 */

#include <iostream>
#include <vector>

using namespace std;

void Print(const std::vector<int>& v) {
    for (const auto& e : v) {
        std::cout << e << " "s;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> five_nums = {1, 2, 3, 4, 5};
    Print(five_nums);

    int t = five_nums[0];
    five_nums[0] = five_nums[4];
    five_nums[4] = t;

    t = five_nums[1];
    five_nums[1] = five_nums[3];
    five_nums[3] = t;

    Print(five_nums);


    return 0;
}
