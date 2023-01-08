#include "Cat.hpp"
#include "colour.h"

using std::cout;
using std::endl;

Cat::Cat()
{
	this->type = "Cat";
	cout << YELLOW "cat object is constructed" RESET << endl;
}

Cat::~Cat()
{
	cout << RED "I've killed the object cat" RESET << endl;
}

void	Cat::makeSound(void) const
{
	cout << GREEN "MEOW" RESET << endl; 
}
