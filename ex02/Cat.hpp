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
		void makeSound()const;
		std::string getIdea(int i)const;
		void addIdea(int i, std::string idea);
};

#endif // CAT
