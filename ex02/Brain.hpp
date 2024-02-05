#ifndef BRAIN_HPP 
#define BRAIN_HPP
#include "Animal.hpp"

class Brain{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain & cp);
		Brain &operator=(const Brain &cp);
		~Brain();
};
#endif // BRAIN
