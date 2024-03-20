#include <iostream>
#include "constants.h"
#include "cylinder.h"

int main() {
    Cylinder cylinder1(2.3, 2.5);
    std::cout << "volumn: " << cylinder1.volume() << std::endl;

    return 0;
}