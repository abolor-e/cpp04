#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
        Cure();
        Cure(Cure const &obj);
        Cure &operator=(Cure const &obj);
        ~Cure();
		AMateria* clone() const; //pure virtual function
        void    use(ICharacter& target);
};

#endif