#include "Brain.hpp"
#include "colour.h"
#include<sstream>  

using std::cout;
using std::endl;

string	intToString(const int i)
{
	std::ostringstream ss;
	ss << i;
	return (ss.str());
}
Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Ideas_" + intToString(i);
	cout << BLUE "Brain created" RESET << endl;
}

Brain::~Brain(void)
{
	cout << RED "Brain destroyed" RESET << endl;
}

Brain::Brain(const Brain &a)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = a.ideas[i];
	cout << GREEN "Brain copy and created" RESET << endl;
}

Brain&	Brain::operator=(const Brain &a)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = a.ideas[i];
	cout << GREEN "Brain copy and assigned" RESET << endl;
	return (*this);
}

void	Brain::readIdea(void)
{
	for (int i = 0; i < 100; i++)
		cout << this->ideas[i] << endl;
}