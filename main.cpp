#include <stdio.h>
#include "Enemy.h"

int main() {

    Enemy enemy;

    // 各状態を一度ずつ実行
    enemy.Update(); // approach状態を実行
    enemy.Update(); // shoot状態を実行
    enemy.Update(); // retreat状態を実行

    return 0;
}