#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* memory[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &obj);
        MateriaSource &operator=(MateriaSource const &obj);
        ~MateriaSource();

        void    learnMateria(AMateria*);
        AMateria*   createMateria(str const& type);
};

#endif