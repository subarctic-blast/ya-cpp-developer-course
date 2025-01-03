/* Урок 5: Ввод данных
 *
 * Задание 1
 *
 * Напишите вежливую программу, которая будет спрашивать имя пользователя и здороваться с ним.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    std::cout << "What is your name?"s << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello, "s << name << "!"s << std::endl;
    return 0;
}
