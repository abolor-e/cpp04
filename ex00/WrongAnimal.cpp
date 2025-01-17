#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
    *this = obj;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj)
{
    if (this != &obj)
    {
        std::cout << "WrongAnimal copy assignment operator called" << std::endl;
        this->type = obj.type;
        return (*this);
    }
    else
    {
        std::cout << "Error: WrongAnimal copy assignment operator called on itself" << std::endl;
        return (*this);
    }
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal deconstructor called" << std::endl;
}

void    WrongAnimal::makeSound(void)const
{
    std::cout << "The Wrong creator: What sound I am supposed to make UWU!?" << std::endl;
}

str WrongAnimal::getType()const
{
    return (this->type);
}