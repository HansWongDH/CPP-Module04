#include "Dog.hpp"
#include "colour.h"

using std::cout;
using std::endl;

Dog::Dog()
{
	this->type = "Dog";
	cout << YELLOW "Dog object is constructed" RESET << endl;
}

Dog::~Dog()
{
	cout << RED "I've killed the object Dog" RESET << endl;
}

void	Dog::makeSound(void) const
{
	cout << GREEN "Bark" RESET << endl; 
}
