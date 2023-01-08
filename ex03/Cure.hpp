#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
	private:

	public:
		Cure();
		~Cure();
		Cure(const Cure &a);
		Cure&	operator=(const Cure &a);
		AMateria* clone (void);
		void	use(ICharacter	&target);
};

#endif
