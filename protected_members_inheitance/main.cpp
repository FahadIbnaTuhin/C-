#include <iostream>
#include "player.h"

int main() {
    Player p1("BasketBall", "John", "Snow");
    // p1.first_name = "Daials"; // Error, as it was protected, can only use and modify by inheritance not directly callable
    std::cout << "player: " << p1 << std::endl;

    return 0;
}