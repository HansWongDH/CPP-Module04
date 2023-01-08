#include "Ice.hpp"
#include "colour.h"
using std::cout;
using std::endl;

Ice::Ice()
{
	this->type = "ice";
	cout << CYAN "Ice created" RESET << endl;
}

Ice::~Ice()
{
	cout << RED "Ice destroyed" RESET << endl;
}

Ice::Ice(const Ice &a)
{
	this->type = a.getType();
	cout << CYAN "Ice copied and created" RESET << endl;
}

Ice&	Ice::operator=(const Ice &a)
{
	this->type = a.getType();
	cout << CYAN "Ice copied and assigned" RESET << endl;
	return (*this);
}

AMateria*	Ice::clone(void)
{
	return (new Ice());
}

void	Ice::use(ICharacter	&target)
{
	cout << CYAN "* shoots an ice bolt at " BLUE << target.getName() << CYAN " *" RESET << endl;
}