#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        AMateria    *slot[4];
        str name;

    public:
        Character();
        Character(str name);
        Character(Character const &obj);
        Character &operator=(Character const &obj);
        ~Character();

        str const &getName() const;
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter &target);
};

#endif