#include "Cure.hpp"

Cure::Cure() : AMateria()
{
    //std::cout << "Cure default constructor called" << std::endl;
    this->type = "cure";
}

Cure::Cure(Cure const &obj) : AMateria()
{
    this->type = obj.type;
    //std::cout << "Cure copy constructor is called" << std::endl;
}

Cure &Cure::operator=(Cure const &obj)
{
    //std::cout << "Cure copy assignment operator is called which is dumb" << std::endl;
    (void)obj;
    return (*this);
}

Cure::~Cure()
{
    //std::cout << "Cure deconstructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria *instance = new Cure(*this);
    return instance;
}

void    Cure::use(ICharacter& target)
{
    std::cout << "\"* heals " << target.getName() << "’s wounds *\"";
}