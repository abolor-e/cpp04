#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat &WrongCat::operator=(WrongCat const &obj)
{
    if (this == &obj)
    {
        std::cout << "Error: WrongCat copy assigment operator on itself" << std::endl;
        return (*this);
    }
	this->type = obj.type;
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor called" << std::endl;
}

void    WrongCat::makeSound(void)const
{
	std::cout << this->getType() << ": " << "****Wrong MEOW****" << std::endl;
}