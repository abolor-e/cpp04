#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << std::endl
			  << "\033[32mCONSTRUCTION\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl
			  << "\033[32mTYPES of ANIMALS\033[0m" << std::endl;

	std::cout << "I guess I am a " << j->getType() << std::endl
			  << "I guess I am a " << i->getType() << std::endl
			  << "I guess I am a " << meta->getType() << std::endl;
	
	std::cout << std::endl
			  << "\033[32mWHAT SOUND THEY CAN MAKE\033[0m" << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl
			  << "\033[32mNO LEAKS OFC\033[0m" << std::endl;

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	std::cout << std::endl
			  << "\033[33mANIMAL COPY CHECK\033[0m" << std::endl;
	const Animal* something = new Animal();
	std::cout << something->getType() << " " << std::endl;
	something->makeSound();

	std::cout << std::endl;

	const Animal* o = new Animal(*something);//copy constructor
	std::cout << o->getType() << " " << std::endl;
	std::cout << std::endl;
	Animal* obj = new Animal();
	*obj = *o;//copy assignment operator
	std::cout << obj->getType() << " " << std::endl;
	std::cout << std::endl;
	delete something;
	delete o;
	delete obj;

	std::cout << std::endl
			  << "\033[33mDOG CAT COPY CHECK\033[0m" << std::endl;
	const Dog* a = new Dog();
	Dog* f = new Dog(*a);
	std::cout << "I guess I am a " << f->getType() << std::endl;
	f->makeSound();
	std::cout <<std::endl;
	const Cat* b = new Cat();
	Cat* g = new Cat(*b);
	std::cout << "I guess I am a " << g->getType() << std::endl;
	g->makeSound();
	std::cout << std::endl;
	delete a;
	delete f;
	delete b;
	delete g;

	std::cout << std::endl;
	std::cout << std::endl
			  << "\033[34mCONSTRUCTION of WRONGCAT\033[0m" << std::endl;
	const WrongAnimal* w = new WrongCat();
	const WrongCat* cat = new WrongCat();
	
	std::cout << std::endl
			  << "\033[34mTYPES of ANIMALS\033[0m" << std::endl;

	std::cout << "I guess I am a " << w->getType() << std::endl;
	
	std::cout << std::endl
			  << "\033[34mWHAT SOUND THEY CAN MAKE\033[0m" << std::endl;

	w->makeSound();
	cat->makeSound();

	std::cout << std::endl
			  << "\033[34mNO LEAKS OFC\033[0m" << std::endl;

	delete w;
	delete cat;
	return 0;
}