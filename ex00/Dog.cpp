#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog():Animal("dog"){
}

Dog::Dog(const Dog &cp){
	*this = cp;
}

Dog &Dog::operator=(const Dog &cp){
	if (this == &cp){
		return *this;
	}
	this->type = cp.type;
	return *this;
}

Dog::~Dog(){
}

void Dog::makeSound()const{
	std::cout << "ugggggrrrrrrrrgggrrrr\n";
}

