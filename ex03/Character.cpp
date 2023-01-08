#include "Character.hpp"
#include "colour.h"

using std::cout;
using std::endl;


Character::Character(void)
{
	this->_name = "";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	cout << "Default Character created" << endl;
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	cout << MAGENTA "Character " << name << " created" RESET << endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])	
			delete this->inventory[i];
	}
	cout << RED "Character " << this->getName() << " Destructed"  RESET << endl;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == 3 && this->inventory[i])
		{
			cout << YELLOW <<this->getName() <<": Inventory is full" RESET << endl;
			break ;
		}
		if	(!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
	}
}
void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		cout << YELLOW <<this->getName() << ": Index out of range of inventory" << endl;
	if (inventory[idx])
	{
		cout << YELLOW << this->getName() << " has unequipped " << inventory[idx]->getType() << " from slot no :" << idx << endl;
		delete inventory[idx];
		inventory[idx] = NULL;
	}
	else
		cout << YELLOW << this->getName() << " Inventory slot <"<< idx << "> is empty" << endl;
}

std::string const &Character::getName() const
{
	return(this->_name);
}
void	Character::use(int idx, ICharacter &target)
{
	this->inventory[idx]->use(target);
}