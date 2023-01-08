#include "WrongCat.hpp"
#include "colour.h"

using std::cout;
using std::endl;

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	cout << YELLOW "WrongCat object is constructed" RESET << endl;
}

WrongCat::~WrongCat()
{
	cout << RED "I've killed the object WrongCat" RESET << endl;
}

void	WrongCat::makeSound(void) const
{
	cout << GREEN "MEEEEEEEH" RESET << endl; 
}