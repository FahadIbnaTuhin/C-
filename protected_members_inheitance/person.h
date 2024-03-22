#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
    friend std::ostream& operator<<(std::ostream& out, const Person& person);
    public:
        Person();
        Person(std::string& first_name_param, std::string& last_name_param);
        ~Person();

        // Getters
        std::string get_first_name() const {
            return first_name;
        }

        std::string get_last_name() const {
            return last_name;
        }
    protected: // All the inheritance can use & modify this but you cann't call directly from others(e.x. main.cpp)
        std::string first_name {"Mysterious"};
        std::string last_name {"Person"};
};

#endif