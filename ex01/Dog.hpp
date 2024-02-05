#ifndef DOG_HPP 
#define DOG_HPP
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain *_brain;
	public:
		Dog(); 
		Dog(const Dog &cp);
		Dog &operator=(const Dog &cp);
		~Dog();
		virtual void makeSound()const;
};

#endif // DOG
