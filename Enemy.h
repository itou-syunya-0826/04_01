#pragma once
#include <iostream>
#include <thread>//タスクを並行して行ってくれる
#include <chrono>//時間待ちの計測をしてくれる

class Enemy
{
public:

    Enemy() : state(&Enemy::Approach) {}

    // メンバ関数ポインタの型定義
    typedef void (Enemy::* StateFunc)();

    // 状態遷移のメンバ関数
    void Approach();//敵の接近

    void Shoot();//敵の射撃

    void Retreat();//敵の離脱

    // 状態を更新するメンバ関数
    void Update();

private:

	StateFunc state;

};