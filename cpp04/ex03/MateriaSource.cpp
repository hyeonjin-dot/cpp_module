#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    name = "Nonamed";
    total = 0;
    for (int i = 0; i < 4; i++)
        inv[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    name = other.name;
    total = 0;
    for (int i = 0; i < 4; i++)
    {
        delete inv[i];
        inv[i] = NULL;
    }
    for (int i = 0; i < 4; i++)
        inv[i] = other.inv[i]->clone();
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < total; i++)
    {
        delete inv[i];
        inv[i] = NULL;
    }
}


MateriaSource &MateriaSource::operator=(const MateriaSource &tmp)
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
        learnMateria(tmp.inv[i]->clone());
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* m)
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
        std::cout << "can't learn" << std::endl;
    return ;
}

AMateria *MateriaSource::createMateria(std::string const & tmp)
{
    for (int i = 0; i < total; i++)
	    {
		    if (inv[i]->getType().compare(tmp) == 0)//compare은 string 함수
	    	{
			    return (inv[i]->clone());
		    }
	    }
	return (NULL);
}