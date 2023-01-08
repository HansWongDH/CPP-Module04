#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria
{
	private:

	public:
		Ice();
		~Ice();
		Ice(const Ice &a);
		Ice&	operator=(const Ice &a);
		AMateria* clone (void);
		void	use(ICharacter	&target);
};

#endif
