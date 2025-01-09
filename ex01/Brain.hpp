#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    private:
        str ideas[100];
    public:
        Brain();
        Brain(Brain const &obj);
        Brain   &operator=(Brain const &obj);
        virtual ~Brain();
    void    setIdea(int nbr, str idea);
    str getIdea(int nbr);


};

#endif