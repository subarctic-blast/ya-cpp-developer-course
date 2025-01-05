/* Урок 7: Ходим по кругу — цикл for
 *
 * Задание 4
 *
 * В векторе строк some_vector найдите самую длинную строку и её индекс. Выведите её в соответствии с форматом выходных
 * данных. Если несколько строк имеют одинаковую длину, выведите первую из них.
 * Выведите текст: Longest string "{строка}" at index {индекс}, в котором на месте плейсхолдера {строка} должна быть
 * найденная строка, а на месте {индекс} — найденный индекс. Кавычки вокруг найденной строки также надо выводить.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    std::vector<std::string> some_vector = {"To"s, "be"s, "or"s, "not"s, "to"s, "be"s};

    size_t max_len = 0;
    size_t max_idx = 0;
    size_t cur_idx = 0;
    for (const auto& str : some_vector) {
        if (str.size() > max_len) {
            max_len = str.size();
            max_idx = cur_idx;
        }
        ++cur_idx;
    }

    std::cout << "Longest string \""s << some_vector[max_idx] << "\" at index "s << max_idx << std::endl;

    return 0;
}
