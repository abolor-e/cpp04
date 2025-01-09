#include "Animal.hpp"

Animal::Animal() : type("default")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
    *this = obj;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &obj)
{
    if (this != &obj)
    {
        std::cout << "Animal copy assignment operator called" << std::endl;
        this->type = obj.type;
        return (*this);
    }
    else
    {
        std::cout << "Error: Animal copy assignment operator called on itself" << std::endl;
        return (*this);
    }
}

Animal::~Animal()
{
    std::cout << "Animal deconstructor called" << std::endl;
}

void    Animal::makeSound(void)const
{
    std::cout << "UWU" << std::endl;
}

str Animal::getType()const
{
    return (this->type);
}