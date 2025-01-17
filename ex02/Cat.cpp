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
	this->type = obj.type;
	if (obj.brain != NULL)
        this->brain = new Brain(*obj.brain);
    else 
        this->brain = NULL;
}

Cat &Cat::operator=(Cat const &obj)
{
    if (this == &obj)
    {
        std::cout << "Error: Cat copy assigment operator on itself" << std::endl;
        return (*this);
    }
	this->type = obj.type;
	if (this->brain != NULL)
		delete (this->brain);
	if (obj.brain != NULL)
		this->brain = new Brain(*obj.brain);
	else
		this->brain = NULL;
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	if (this->brain != NULL)
		delete (this->brain);
	std::cout << "Cat deconstructor called" << std::endl;
}

void    Cat::makeSound(void)const
{
	std::cout << this->getType() << ": " << "****MEOW****" << std::endl;
}