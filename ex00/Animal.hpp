#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
/*Possible Polymorphisms
Static and Dynamic Polimorphism
- Dynamic can be implemented by inheriting and virtual functions (RUN TIME)!
- Static can be implemented by overloading function and operator! (Compile TIME)*/

typedef std::string str;

class Animal
{
    protected:
        str type;
    public:
        Animal();
        Animal(Animal const &obj);
        Animal &operator=(Animal const &obj);
        virtual ~Animal();

        virtual void    makeSound(void)const;
        str getType()const;
};

#endif