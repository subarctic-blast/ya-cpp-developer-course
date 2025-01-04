/* Урок 4: Ставим условия
 *
 * Задание 2
 *
 * Общее правило: если число заканчивается на 1, ставят суффикс “st”, если на 2 — “nd”, если на 3 — “rd”, а в остальных
 * случаях — “th”. Исключение составляют числа, которые оканчиваются на 11, 12 и 13. Для них используют суффикс “th”.
 * Напишите программу, которая запрашивает целое число и печатает английское порядковое числительное.
 */

#include <iostream>

using namespace std;

int main() {
    int x;
    std::cin >> x;

    int twoLastDigit = std::abs(x % 100);
    int oneLastDigit = std::abs(x % 10);

    std::string postfix = "th"s;
    if (11 == twoLastDigit || 12 == twoLastDigit || 13 == twoLastDigit) {
        postfix = "th"s;
    } else if (oneLastDigit == 1) {
        postfix = "st"s;
    } else if (oneLastDigit == 2) {
        postfix = "nd"s;
    } else if (oneLastDigit == 3) {
        postfix = "rd"s;
    }

    std::cout << x << postfix << std::endl;

    return 0;
}
