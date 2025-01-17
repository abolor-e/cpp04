#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &obj) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = obj.type;
	if (obj.brain != NULL)
        this->brain = new Brain(*obj.brain);
    else 
        this->brain = NULL;
}

Dog &Dog::operator=(Dog const &obj)
{
    if (this == &obj)
    {
        std::cout << "Error: Dog copy assigment operator on itself" << std::endl;
        return (*this);
    }
	this->type = obj.type;
	if (this->brain != NULL)
		delete (this->brain);
	if (obj.brain != NULL)
		this->brain = new Brain(*obj.brain);
	else
		this->brain = NULL;
	std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
	if (this->brain != NULL)
		delete (this->brain);
	std::cout << "Dog deconstructor called" << std::endl;
}

void   Dog::makeSound(void)const
{
	std::cout << this->getType() << ": " << "****WUFFFFFFF****" << std::endl;
}

void Dog::setIdeaInBrain(int nbr, str idea)
{
	this->brain->setIdea(nbr, idea);
}

void	Dog::getIdeaFromBrain(int nbr)
{
	std::cout << this->getType() << "'s idea is " << this->brain->getIdea(nbr) << std::endl;
}
