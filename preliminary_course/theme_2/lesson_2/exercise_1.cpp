/* Урок 2: Числа
 *
 * Задание 1
 *
 * Роберт никак не может запомнить, когда нужно поздравлять друзей с юбилеями. Поэтому он решил написать программу для
 * вычисления памятных дат. В переменной name будет храниться имя, в переменной age — количество лет, а в переменной
 * birth_year — год рождения. Ваша задача сообщить, в каком году человеку с указанным именем исполнится указанное
 * количество лет. Объявлять эти переменные не надо — считайте, что они уже существуют в программе.
 */

#include <iostream>

using namespace std;

std::string name = "Wolfgang"s;
int age = 10;
int birth_year = 1756;

int main() {
    std::cout << name << " will turn "s << age << " in "s << birth_year + age << std::endl;
    return 0;
}