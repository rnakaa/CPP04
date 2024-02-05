#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
}

WrongAnimal::WrongAnimal(std::string type){
	this->type = type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cp){
	if (this == &cp){
		return *this;
	}
	this->type = cp.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cp){
	*this = cp;
}


WrongAnimal::~WrongAnimal(){
}

void WrongAnimal::makeSound()const{
	std::cout << "hello\n";
}

std::string WrongAnimal::getType()const{
	return type;
}
