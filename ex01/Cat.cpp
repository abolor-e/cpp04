#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &obj) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(Cat const &obj)
{
    if (this == &obj)
    {
        std::cout << "Error: Cat copy assigment operator on itself" << std::endl;
        return (*this);
    }
	this->type = obj.type;
	this->brain = new Brain();
	*this->brain = *obj.brain;
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete (this->brain);
	std::cout << "Cat deconstructor called" << std::endl;
}

void    Cat::makeSound(void)const
{
	std::cout << this->getType() << ": " << "****MEOW****" << std::endl;
}