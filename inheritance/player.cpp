#include "person.h"
#include "player.h"

Player::Player(const std::string& game_param) : m_game(game_param) {
    // first_name = "HI"; // Error because first name and last name is inside private inside the base class. and you can't access or modify using inheritance
    // last_name = "Bye"; // Error
}

std::ostream& operator<<(std::ostream& out, const Player& player) {
    out << "Player: [game: " << player.m_game << " names: " << player.get_first_name() << " " << player.get_last_name() << "]";
    return out;   
}