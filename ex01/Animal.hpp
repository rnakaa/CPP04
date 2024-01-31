#ifndef ANIMAL_HPP 
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal &cp);
		Animal &operator=(Animal &cp);
		virtual ~Animal();
		std::string getType()const;
		virtual void makeSound()const;
};

#endif // ANIMAL
