#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
public:
    Character(void);
    Character(const std::string &tmp);
    Character(const Character &tmp);
    virtual ~Character();

    Character &operator=(const Character &tmp);

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

private:
    AMateria*   inv[4];
    std::string name;
    int         total;
};

#endif