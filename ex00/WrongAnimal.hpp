#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

using std::string;

class WrongAnimal
{
	protected:
		string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &a);
		WrongAnimal& operator=(const WrongAnimal &a);
		void	makeSound() const;
		string	getType() const;
		void	setType(const string type);
};

#endif
