#include "AMateria.hpp"

AMateria::~AMateria()
{
	std::cout << "Materia destroyed" << std::endl;

}

std::string	const&	AMateria::getType(void)	const
{
	return (this->type);
}