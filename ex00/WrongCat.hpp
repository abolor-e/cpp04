#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat(WrongCat const &obj);
		WrongCat	&operator=(WrongCat const &obj);
		~WrongCat();

		void	makeSound(void)const;
};

#endif