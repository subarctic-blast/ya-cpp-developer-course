/* Урок 1: Если и только если
 *
 * Задание 1
 *
 * Напишите программу, заменяющую охранника. Робот должен спросить "How old are you?". Затем он считывает целое число —
 * возраст посетителя. Если посетителю есть 18, робот печатает приветствие: “Welcome!”.
 */

#include <iostream>

using namespace std;

int main() {
    std::cout << "How old are you?"s << std::endl;
    int age;
    std::cin >> age;
    if (age >= 18) {
        std::cout << "Welcome!"s << std::endl;
    }

    return 0;
}
