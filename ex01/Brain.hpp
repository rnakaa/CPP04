#ifndef BRAIN_HPP 
#define BRAIN_HPP
#include "Animal.hpp"

class Brain{
	private:
		std::string _ideas[100];
	public:
		Brai();
		Brain(Brain & cp);
		Brain &operator=(Brain &cp);
		~Brain();
}
#endif // BRAIN
