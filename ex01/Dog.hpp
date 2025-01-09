#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog const &obj);
		Dog	&operator=(Dog const &obj);
		~Dog();

		void	makeSound(void)const;
        void setIdeaInBrain(int nbr, str idea);
		void	getIdeaFromBrain(int nbr);

};

#endif