#include "Dog.hpp"
#include "colour.h"


using std::cout;
using std::endl;

Dog::Dog()
{
	this->type = "Dog";
	this->_dog_brain = new Brain();
	cout << YELLOW "Dog object is constructed" RESET << endl;
}

Dog::~Dog()
{
	delete this->_dog_brain;
	cout << RED "I've killed the object Dog" RESET << endl;
}

Dog::Dog(const Dog &a)
{
	this->type = a.getType();
	this->_dog_brain = new Brain(*a._dog_brain);
	cout << YELLOW "Dog object is copy and constructed" RESET << endl;
}

Dog&	Dog::operator=(const Dog &a)
{
	this->type = a.getType();
	if (this->_dog_brain)
		delete this->_dog_brain;
	this->_dog_brain = new Brain(*a._dog_brain);
	cout << YELLOW "Dog object is copy and assigned" RESET << endl;
	return (*this);
}

Brain*	Dog::getBrain(void) const
{
	return (this->_dog_brain);
}

void	Dog::makeSound(void) const
{
	cout << GREEN "Bark" RESET << endl; 
}
