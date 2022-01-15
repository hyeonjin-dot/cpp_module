#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
    private :
    std::string type;

    public :
    Weapon();
    Weapon(std::string weap);
    ~Weapon();
    void setType(std::string tmp);//
    std::string &getType();

};

#endif