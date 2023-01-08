#include "Cat.hpp"

#include "colour.h"

using std::cout;
using std::endl;

Cat::Cat()
{
	this->type = "Cat";
	this->_cat_brain = new Brain();
	cout << YELLOW "cat object is constructed" RESET << endl;
}

Cat::~Cat()
{
	delete this->_cat_brain;
	cout << RED "I've killed the object cat" RESET << endl;
}

Cat::Cat(const Cat &a)
{
	this->type = a.getType();
	this->_cat_brain = new Brain(*a._cat_brain);
	cout << YELLOW "cat object is copy and constructed" RESET << endl;
}
Cat&	Cat::operator=(const Cat &a)
{
	this->type = a.getType();
	if (this->_cat_brain)
		delete this->_cat_brain;
	this->_cat_brain = new Brain(*a._cat_brain);
	cout << YELLOW "cat object is copy and assigned" RESET << endl;
	return (*this);
}

Brain*	Cat::getBrain(void) const
{
	return (this->_cat_brain);
}

void	Cat::makeSound(void) const
{
	cout << GREEN "MEOW" RESET << endl; 
}
