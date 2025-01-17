#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : memory()
{
    //std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
    for (int i = 0; i < 4; i++)
    {
        if (obj.memory[i])
            this->memory[i] = obj.memory[i]->clone();
    }
    //std::cout << "Memory copied (copy constructor)" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
    if (this == &obj)
        return (*this);
    for (int i = 0; i < 4; i++)
    {
        if (this->memory[i])
        {
            delete (this->memory[i]);
            this->memory[i] = NULL;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (obj.memory[i])
            this->memory[i] = obj.memory[i]->clone();
        else
            this->memory[i] = NULL;
    }
    //std::cout << "Memory copy assignment operator called" << std::endl;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->memory[i])
            delete this->memory[i];
    }
}

void    MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->memory[i] == NULL)
        {
            this->memory[i] = materia;
            std::cout << "MateriaSource learned " << materia->getType() << std::endl;
            return ;
        }
    }
    std::cout << "Materia not learned due to full memory" << std::endl;
}

AMateria* MateriaSource::createMateria(str const& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (memory[i] != NULL && memory[i]->getType() == type)
        {
            std::cout << "MateriaSource created " << type << std::endl;
            return (this->memory[i]->clone());
        }
    }
    return (NULL);
}