#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

//creating a abstract class of materia
class ICharacter;

class AMateria
{
	protected:
		std::string	type;
	public:
		// AMateria();
		virtual ~AMateria();
		std::string	const	&getType(void)	const;
		virtual AMateria* clone (void) = 0;
		virtual	void	use(ICharacter	&target) = 0;
};

#endif
