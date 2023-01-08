#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

using std::string;

class Brain
{
	private:
		string	ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &a);
		Brain&	operator=(const Brain &a);
		void	readIdea(void);
};

#endif
