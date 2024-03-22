#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "person.h"

class Player: public Person { // inheritance. Player can now use and modify Person class inside Player class
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
    public:
        Player() = default;
        Player(std::string& game_param, std::string& first_name_param, std::string& last_name_param);
    
    private:
        std::string m_game {"None"};
};

#endif