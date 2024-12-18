/* Урок 1: Переменных требуют наши сердца
 *
 * Задание 1
 *
 * Производителю роботов Дублин-Дайнемикс требуется программа для вывода информации о местонахождении робота.
 * Известно, что название робота сохранено в переменной name типа string, а задание в переменной task, тоже имеющей тип
 * string. Выведите информацию о роботе. Переменные объявлены в скрытой части тренажёра. Там же указан их тип. Ваша
 * задача лишь использовать переменные, назвав их по имени.
 */

#include <iostream>

using namespace std;

// Robot RS-21 is requested for fire.
const std::string name = "RS-21"s;
const std::string task = "fire"s;

int main() {
    std::cout << "Robot "s << name << " is requested for "s << task << "."s << std::endl;
    return 0;
}
