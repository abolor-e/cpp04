#include "Character.hpp"

Character::Character() :  slot(), name("")
{
    //std::cout << "Character default constructor called" << std::endl;
}

Character::Character(str name) : name(name)
{
    //std::cout << "Character name constructor called" << std::endl;
}

Character::Character(Character const &obj) : ICharacter(obj), slot()
{
    this->name = obj.name;
    for (int i = 0; i < 4; i++)
    {
        if (obj.slot[i])
            this->slot[i] = obj.slot[i]->clone();
        else
            this->slot[i] = NULL;
    }
    //std::cout << "Character copied (copy constructor)" << std::endl;
}

Character &Character::operator=(Character const &obj)
{
    if (this == &obj)
        return (*this);
    this->name = obj.name;
    for (int i = 0; i < 4; i++)
    {
        if (this->slot[i])
        {
            delete (this->slot[i]);
            this->slot[i] = NULL;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (obj.slot[i])
            this->slot[i] = obj.slot[i]->clone();
        else
            this->slot[i] = NULL;
    }
    //std::cout << "Character copy assignment operator called" << std::endl;
    return (*this);
}

Character::~Character()
{
    //std::cout << "Character deconstructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->slot[i])
            delete (this->slot[i]);
    }
    std::cout << "Character slots deleted" << std::endl;
}

str const &Character::getName()const
{
    return (this->name);
}

void    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->slot[i] == NULL)
        {
            this->slot[i] = m;
            break;
        }
        if (i == 3)
            std::cout << "Slots are full" << std::endl;
    }
}

void    Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << "Choose index between 0-3" << std::endl;
        return ;
    }
    else
        this->slot[idx] = NULL; //The unequip() member function must NOT delete the Materia!
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << "Choose between 0 - 3 index" << std::endl;
        return ;
    }
    if (slot[idx] == NULL)
    {
        std::cout << "Not usable slot (EMPTY)" << std::endl;
        return ;
    }
    std::cout << name << ": ";
    slot[idx]->use(target);
    std::cout << std::endl;
    delete (this->slot[idx]);
    this->slot[idx] = NULL;
}