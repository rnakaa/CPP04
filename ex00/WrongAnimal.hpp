#ifndef WRONGANIMAL_HPP 
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &cp);
		WrongAnimal &operator=(const WrongAnimal &cp);
		~WrongAnimal();
		std::string getType()const;
		void makeSound()const;
};

#endif // ANIMAL
