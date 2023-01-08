#include "Animal.hpp"
#include "colour.h"

using std::cout;
using std::endl;

Animal::Animal(void)
{
	this->type = "";
	cout << BLUE "Default constructor of animal called" RESET << endl;
}

Animal::~Animal(void)
{
	cout << RED "Default destructor of animal called" RESET << endl;
}

Animal::Animal(const Animal &a)
{
	this->type = a.type;
	cout << GREEN "Copy constructor of animal class called" RESET << endl;
}

Animal&	Animal::operator=(const Animal &a)
{
	this->type = a.type;
	cout << GREEN "Copy assignment operator of animal class called" RESET << endl;
	return (*this);
}

void	Animal::makeSound(void) const
{
	cout << BLUE "I am a base Animal class beep boop" RESET << endl;
}

string	Animal::getType() const
{
	return (this->type);
}

void	Animal::setType(const string type)
{
	this->type = type;
}