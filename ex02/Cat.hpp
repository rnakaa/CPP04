#ifndef CAT_HPP 
#define CAT_HPP
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(Cat &cp);
		Cat &operator=(Cat &cp);
		~Cat();
		virtual void makeSound()const;
};

#endif // CAT
