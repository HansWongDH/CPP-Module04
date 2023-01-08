#include "Cure.hpp"
#include "colour.h"

using std::cout;
using std::endl;

Cure::Cure()
{
	this->type = "cure";
	cout << CYAN "Cure created" RESET << endl;
}

Cure::~Cure()
{
	cout << RED "Cure destroyed" RESET << endl;
}

Cure::Cure(const Cure &a)
{
	this->type = a.getType();
	cout << CYAN "Cure copied and created" RESET << endl;
}

Cure&	Cure::operator=(const Cure &a)
{
	this->type = a.getType();
	cout << CYAN "Cure copied and assigned" RESET << endl;
	return (*this);
}

AMateria*	Cure::clone(void)
{
	return (new Cure());
}

void	Cure::use(ICharacter	&target)
{
	cout << GREEN "* heals " BLUE << target.getName() << GREEN "’s wounds *" RESET << endl;
}
