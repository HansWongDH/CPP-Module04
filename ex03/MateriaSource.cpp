#include "MateriaSource.hpp"
#include "colour.h"

using std::cout;
using std::endl;

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->sources[i] = NULL;
	cout << BLUE "Default MateriaSource constructor called" RESET << endl;
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (sources[i])
			delete sources[i];
	}
	cout << RED "Default MateriaSource destructor called" RESET << endl;
}
void MateriaSource::learnMateria(AMateria *m)
{
	
	for (int i = 0; i < 4; i++)
	{
		if (i == 3 && this->sources[i])
		{
			cout << YELLOW  <<"MateriaSource is full, can't learn any new materia" RESET << endl;
			break ;
		}
		if	(!this->sources[i])
		{
			this->sources[i] = m;
			break;
		}
	}

}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (sources[i])
			if (sources[i]->getType() == type)
				return (sources[i]->clone());
	}
	return (NULL);
}
