#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
        Ice();
        Ice(Ice const &obj);
        Ice &operator=(Ice const &obj);
        ~Ice();
		AMateria* clone() const; //pure virtual function
        void use(ICharacter& target);
};

#endif