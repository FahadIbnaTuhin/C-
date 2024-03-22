#include "person.h"
#include "player.h"

Player::Player(std::string& game_param, std::string& first_name_param, std::string& last_name_param) : m_game(game_param) {
    m_game = game_param;
    first_name = first_name_param;
    last_name = last_name_param;
}

std::ostream& operator<<(std::ostream& out, const Player& player) {
    out << "Player: [game: " << player.m_game << " names: " << player.get_first_name() << " " << player.get_last_name() << "]";
    return out;   
}