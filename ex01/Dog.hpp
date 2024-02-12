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
		std::string getIdea(int i)const;
		void addIdea(int i, std::string idea);
};

#endif // DOG
