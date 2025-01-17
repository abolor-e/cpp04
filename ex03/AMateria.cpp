#include "AMateria.hpp"

AMateria::AMateria() : type("")
{
    //std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(str const &type) : type(type)
{
    //std::cout << "AMateria type constructor is called" << std::endl;
}

AMateria::AMateria(AMateria const &obj) : type(obj.type)
{
    //std::cout << "AMateria copy constructor is called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &obj)
{
    if (this == &obj)
    {
        std::cout << "Error: AMateria copy assignment operator is called on itself" << std::endl;
        return (*this);
    }
    this->type = obj.type;
    //std::cout << "AMateria copy assignment operator is called" << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    //std::cout << "AMateria deconstructor called" << std::endl;
}

str const &AMateria::getType()const
{
    return (this->type);
}