/* Урок 4: Один оператор хорошо, а много — лучше!
 *
 * Задание 2
 *
 * Робот спасатель RS-99 прибыл на ликвидацию пожара. Но прежде, чем начать тушение, надо эвакуировать людей.
 * Штаб предоставил схему помещения, в которой отмечено положение пострадавших и начальная позиция робота.
 * Ваша задача написать программу для робота. Он должен:
 *
 *  благополучно дойти до пострадавших;
 *  вернуться с пострадавшими в исходную точку.
 *
 * В этой задаче cout не нужен, вместо этого будем применять команды перемещения робота. На этом этапе вам доступны
 * следующие команды:
 *
 *  Up() — пойти на сектор вверх,
 *  Right() — пойти на сектор вправо,
 *  Down() — пойти на сектор вниз,
 *  Left() — пойти на сектор влево.
 */

void Up() {}
void Right() {}
void Down() {}
void Left() {}

int main() {
    Up();
    Up();
    Right();
    Right();
    Up();
    Up();
    Down();
    Down();
    Left();
    Left();
    Down();
    Down();
    return 0;
}
