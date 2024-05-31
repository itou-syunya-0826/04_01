#pragma once
#include <iostream>
#include <thread>//�^�X�N����s���čs���Ă����
#include <chrono>//���ԑ҂��̌v�������Ă����

class Enemy
{
public:

    Enemy() : state(&Enemy::Approach) {}

    // �����o�֐��|�C���^�̌^��`
    typedef void (Enemy::* StateFunc)();

    // ��ԑJ�ڂ̃����o�֐�
    void Approach();//�G�̐ڋ�

    void Shoot();//�G�̎ˌ�

    void Retreat();//�G�̗��E

    // ��Ԃ��X�V���郁���o�֐�
    void Update();

private:

	StateFunc state;

};