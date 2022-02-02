#include "Character.hpp"

Character::Character(void):ICharacter()
{
    name = "Nonamed";
    total = 0;
    for (int i = 0; i < 4; i++)
        inv[i] = NULL;
}

Character::Character(const std::string &tmp)
{
    name = tmp;
    total = 0;
    for (int i = 0; i < 4; i++)
        inv[i] = NULL;
}

Character::Character(const Character &tmp)
{
    *this = tmp;
}

Character::~Character()
{
    for (int i = 0; i < total; i++)
    {
        delete inv[i];
        inv[i] = NULL;
    }
}

Character &Character::operator=(const Character &tmp)
{
    if (this == &tmp)
        return (*this);
    for (int i = 0; i < total; i++)
    {
        delete inv[i];
        inv[i] = NULL;
    }
    total = 0;
    for (int i = 0; i < 4; i++)
        equip(tmp.inv[i]->clone());
    return (*this);
}

std::string const &Character::getName() const
{
    return (name);
}

void    Character::equip(AMateria* m)
{
    if (total < 4 && m)
    {
        for (int k = 0; k < total; k++)
        {
            if (inv[k] == m)
                return ;
        }
        inv[total] = m;
        total++;
    }
    else
        std::cout << "can't equip" << std::endl;
    return ;
}

void    Character::unequip(int idx)
{
    if (!inv[idx] || idx < 0 || idx > 3)
        return ;
    else
    {
        if (idx == 3)
            inv[idx] = NULL;
        else
        {
            for (int j = idx; j < 3 ; j++)
            {
                inv[j] = inv[j + 1];
                inv[j + 1] = NULL;
            }
        }
    }
    total--;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inv[idx])
    {
        inv[idx]->use(target);
    }
}