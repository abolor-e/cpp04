#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = obj;
}

Brain &Brain::operator=(Brain const &obj)
{
    if (this == &obj)
    {
        std::cout << "Error: Copy assignment operator called on itself" << std::endl;
        return (*this);
    }
    for (int i = 0; i < 100; i++)
    {
        if (!obj.ideas[i].empty())
            this->ideas[i] = obj.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain deconstructor called" << std::endl;
}

void    Brain::setIdea(int nbr, str idea)
{
    if (nbr > 99 || nbr < 0)
        std::cout << "Choose idea number 0 - 99" << std::endl;
    else
        this->ideas[nbr] = idea;
}

str Brain::getIdea(int nbr)
{
    if (nbr > 99 || nbr < 0)
        return ("Error: Choose idea number 0 - 99");
    else
        return (this->ideas[nbr]);
}