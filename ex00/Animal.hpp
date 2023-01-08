#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::string;

class Animal
{
	protected:
		string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &a);
		Animal& operator=(const Animal &a);
		virtual void	makeSound() const;
		string	getType() const;
		void	setType(const string type);
};

#endif
