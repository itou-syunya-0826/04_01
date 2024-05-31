#include "Enemy.h"

void Enemy::Approach()
{
    std::cout << "敵が接近しています...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));//二秒待ってから出力
    state = &Enemy::Shoot;
}

void Enemy::Shoot()
{
    std::cout << "敵が射撃しています...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));//二秒待ってから出力
    state = &Enemy::Retreat;
}

void Enemy::Retreat()
{
    std::cout << "敵が離脱しています...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));//二秒待ってから出力
    state = nullptr; // これ以上の遷移はないので null に設定
}

void Enemy::Update()
{
    if (state != nullptr) {
        (this->*state)(); // メンバ関数ポインタを使って関数を呼び出す
    }
}


