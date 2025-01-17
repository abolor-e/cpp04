#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>
/*Possible Polymorphisms
Static and Dynamic Polimorphism
- Dynamic can be implemented by inheriting and virtual functions (RUN TIME)!
- Static can be implemented by overloading function and operator! (Compile TIME)*/

typedef std::string str;

class WrongAnimal
{
    protected:
        str type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &obj);
        WrongAnimal &operator=(WrongAnimal const &obj);
        virtual ~WrongAnimal();

        void    makeSound(void)const;
        str getType()const;
};

#endif