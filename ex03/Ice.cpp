#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    //std::cout << "Ice default constructor called" << std::endl;
    this->type = "ice";
}

Ice::Ice(Ice const &obj) : AMateria()
{
    this->type = obj.type;
    //std::cout << "Ice copy constructor is called" << std::endl;
}

Ice &Ice::operator=(Ice const &obj)
{
    //std::cout << "Ice copy assignment operator is called which is dumb" << std::endl;
    (void)obj;
    return (*this);
}

Ice::~Ice()
{
    //std::cout << "Ice deconstructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria *instance = new Ice(*this);
    return instance;
}

void    Ice::use(ICharacter& target)
{
    std::cout << "\"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}