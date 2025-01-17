#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete j;
	// delete i;
	// return 0;

	//Abstract class is a class which has atleast one pure virtual function!

	//Animal *a = new Animal();
	const Animal *obj[6];
	std::cout << "...TEST_DECONSTRUCTOR..." << std::endl;
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			obj[i] = new Dog();
		else if (i % 1 == 0)
			obj[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
		delete (obj[i]);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "...TEST_HARD_SHALLOW_COPY..." << std::endl;
	std::cout << std::endl;
	Dog *a = new Dog();
	a->setIdeaInBrain(0,"First Idea");
	a->setIdeaInBrain(1, "Second Idea");
	a->setIdeaInBrain(100, "Some Idea");
	a->setIdeaInBrain(20, "21st Idea");
	std::cout << std::endl;
	Dog *b = new Dog(*a);
	std::cout << std::endl;
	delete (a);

	std::cout << std::endl;
	b->getIdeaFromBrain(0);
	b->getIdeaFromBrain(1);
	b->getIdeaFromBrain(100);
	b->getIdeaFromBrain(20);
	delete b;
}