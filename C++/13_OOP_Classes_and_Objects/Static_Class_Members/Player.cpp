#include "Player.h"

int Player::total_players{0};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        total_players++;
}

Player::Player(const Player &source)
    : Player{source.name, source.health, source.xp} {
}

Player::~Player(){
    total_players--;
}

int Player::get_total_players() {return total_players;}