#include <iostream>

class Person {
    friend std::ostream& operator<<(std::ostream& out, const Person& person);
    public:
        Person();
        Person(std::string first_name_param, std::string last_name_param);
        ~Person();
    private:
        std::string first_name {"Mysterious"};
        std::string last_name {"Person"};
};

/*
#include "person.h"
class Person; // Forward declaration

class Player : public Person { // ":" indicates inheitance(For using and modifying any class). For using public, it's a public inheritance
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
    public:
        Player() = default;
        Player(std::string game_param);
        ~Player();
    private:
        std::string m_game{"None"};
}
*/

int main() {    
    // A defining feature of Object Oriented Programming in C++
    // Building types on top of other types
    // Inheritance hierachies can be set up to suit your needs.
    // Code reuse is improved

    // With public inheritance, derived classes can access and use public members of the base
    // class, but the derived class can't directly access private members
    // The same also applies to friends to friends of the derived class. They have access to private 
    // members of derived, but don't have access to the base class.



    return 0;
}