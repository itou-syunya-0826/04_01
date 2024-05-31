#include "Enemy.h"

void Enemy::Approach()
{
    std::cout << "“G‚ªÚ‹ß‚µ‚Ä‚¢‚Ü‚·...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));//“ñ•b‘Ò‚Á‚Ä‚©‚ço—Í
    state = &Enemy::Shoot;
}

void Enemy::Shoot()
{
    std::cout << "“G‚ªËŒ‚‚µ‚Ä‚¢‚Ü‚·...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));//“ñ•b‘Ò‚Á‚Ä‚©‚ço—Í
    state = &Enemy::Retreat;
}

void Enemy::Retreat()
{
    std::cout << "“G‚ª—£’E‚µ‚Ä‚¢‚Ü‚·...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));//“ñ•b‘Ò‚Á‚Ä‚©‚ço—Í
    state = nullptr; // ‚±‚êˆÈã‚Ì‘JˆÚ‚Í‚È‚¢‚Ì‚Å null ‚Éİ’è
}

void Enemy::Update()
{
    if (state != nullptr) {
        (this->*state)(); // ƒƒ“ƒoŠÖ”ƒ|ƒCƒ“ƒ^‚ğg‚Á‚ÄŠÖ”‚ğŒÄ‚Ño‚·
    }
}


