#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int	main(void)
{
	
std::cout << "Constructor and copy test" << std::endl;
std::cout << "===================" << std::endl;
// const Animal def;  //For testing purposes;
const Animal* j = new Dog();
const Animal* i = new Cat();
const Cat copyfrom;
Cat Testexistingbrain;
Cat testcopy = copyfrom;
Testexistingbrain = copyfrom;

// std::cout << "Address for copyfrom " << copyfrom.getBrain() << std::endl;
// std::cout << "Address for testcopy " << testcopy.getBrain() << std::endl;
// std::cout << "Address for testexstingbrain " << Testexistingbrain.getBrain() << std::endl;
// std::cout << "Address for copyfrom " << copyfrom.getBrain() << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
// j->Animal::makeSound(); // For testing purposes;
// std::cout << "===================" << std::endl;
// std::cout << "Constructor and copy test end" << std::endl << std::endl;


// std::cout << "test my brain array" << std::endl;
// std::cout << "===================" << std::endl;
// copyfrom.getBrain()->readIdea();

// std::cout << "===================" << std::endl;
// std::cout << "test end" << std::endl;

delete i;
delete j;

// std::cout << "creating an array of animal" << std::endl;
// Animal	*arr[10];
// for (int i = 0; i < 10; i++)
// {
// 	if (i % 2 == 0)
// 		arr[i] = new Dog();
// 	else
// 		arr[i] = new Cat();
// }

// std::cout << "Deleting an array of animal" << std::endl;
// for (int i = 0; i < 10; i++)
// {
// 	arr[i]->makeSound();
// 	delete arr[i];
// }
return 0;
}