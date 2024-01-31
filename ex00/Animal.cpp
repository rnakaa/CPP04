#include "Animal.hpp"

Animal::Animal(){
}

Animal::Animal(std::string type){
	this->type = type;
}

Animal &Animal::operator=(Animal &cp){
	if (this == &cp){
		return *this;
	}
	this->type = cp.type;
	return *this;
}

Animal::Animal(Animal &cp){
	*this = cp;
}


Animal::~Animal(){
}

void Animal::makeSound()const{
	std::cout << "hello\n";
}

std::string Animal::getType()const{
	return type;
}
