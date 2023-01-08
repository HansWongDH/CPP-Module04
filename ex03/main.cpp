#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int	main(void)
{
	// std::cout << "testing materia equip and unequip" << std::endl;
	// std::cout << "=================================" << std::endl;
	// AMateria *curaga = new Cure();
	// AMateria *blizzaga = new Ice();

	// Character	Cloud("Cloud");
	// Character	Sephiroth("Sephiroth");

	// Cloud.equip(curaga);
	// Cloud.equip(blizzaga);
	// Cloud.equip(curaga);
	// Cloud.equip(curaga);
	// Cloud.use(1, Sephiroth);
	// Cloud.use(0, Cloud);
	// Cloud.unequip(1);
	// Cloud.unequip(2);
	// Cloud.equip(curaga);
	// Cloud.equip(blizzaga);
	// Cloud.use(1, Sephiroth);


	// delete curaga;
	// delete blizzaga;


	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	// delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	// delete tmp;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;

}