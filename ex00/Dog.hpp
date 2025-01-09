#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog();
		Dog(Dog const &obj);
		Dog	&operator=(Dog const &obj);
		~Dog();

		void	makeSound(void)const;
};

#endif