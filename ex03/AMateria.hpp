#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

typedef std::string str;

class AMateria
{
	protected:
		str	type;
	public:
		AMateria();
		AMateria(str const &type);
		AMateria(AMateria const &obj);
		AMateria &operator=(AMateria const &obj);
		virtual ~AMateria();

		str const &getType()const; //Returns the materia type
		virtual AMateria* clone() const = 0; //pure virtual function
		virtual void use(ICharacter& target) = 0;

};

#endif