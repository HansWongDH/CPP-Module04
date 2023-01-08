#include "WrongAnimal.hpp"
#include "colour.h"

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal(void)
{
	this->type = "";
	cout << BLUE "This is a WrongAnimal" RESET << endl;
}

WrongAnimal::~WrongAnimal(void)
{
	cout << RED "WrongAnimal Terminated" RESET << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	this->type = a.type;
	cout << GREEN "Copy constructor of WrongAnimal class called" RESET << endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &a)
{
	this->type = a.type;
	cout << GREEN "Copy assignment operator of WrongAnimal class called" RESET << endl;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	cout << BLUE "I am not even a correct Animal : Pew pew pew" RESET << endl;
}

string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::setType(const string type)
{
	this->type = type;
}