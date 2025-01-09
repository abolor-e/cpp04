#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &obj) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(Dog const &obj)
{
    if (this == &obj)
    {
        std::cout << "Error: Dog copy assigment operator on itself" << std::endl;
        return (*this);
    }
	this->type = obj.type;
	std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor called" << std::endl;
}

void   Dog::makeSound(void)const
{
	std::cout << this->getType() << ": " << "****WUFFFFFFF****" << std::endl;
}