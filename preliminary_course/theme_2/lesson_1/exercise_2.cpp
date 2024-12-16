/* Урок 1: Переменных требуют наши сердца
 *
 * Задание 2
 *
 * Вы только что закончили предыдущее задание, как пришло новое требование заказчика: вывод информации будет
 * реализовывать агент Муни. Ваша задача — подготовить для него данные. Создайте следующие переменные:
 * robot_name с текстом RC-21\\M2 ;
 * robot_status с текстом Robot "RC-21\\M2" works on fire.
 * Обе переменные должны иметь тип string.
 */

#include <iostream>

using namespace std;

int main() {
    std::string robot_name = "RC-21\\\\M2"s;
    std::string robot_status = "Robot \"RC-21\\\\M2\" works on fire"s;

    std::cout << robot_name << std::endl;
    std::cout << robot_status << std::endl;

    return 0;
}
