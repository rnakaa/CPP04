#ifndef CAT_HPP 
#define CAT_HPP
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &cp);
		Cat &operator=(const Cat &cp);
		~Cat();
		virtual void makeSound()const;
};

#endif // CAT
