#include "Enemy.h"

void Enemy::Approach()
{
    std::cout << "�G���ڋ߂��Ă��܂�...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));//��b�҂��Ă���o��
    state = &Enemy::Shoot;
}

void Enemy::Shoot()
{
    std::cout << "�G���ˌ����Ă��܂�...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));//��b�҂��Ă���o��
    state = &Enemy::Retreat;
}

void Enemy::Retreat()
{
    std::cout << "�G�����E���Ă��܂�...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));//��b�҂��Ă���o��
    state = nullptr; // ����ȏ�̑J�ڂ͂Ȃ��̂� null �ɐݒ�
}

void Enemy::Update()
{
    if (state != nullptr) {
        (this->*state)(); // �����o�֐��|�C���^���g���Ċ֐����Ăяo��
    }
}


