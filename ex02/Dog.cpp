#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog():Animal("dog"), _brain(new Brain()){
	std::cout << "Dog Default constructor called\n";
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
	std::cout << "Dog Default destructor called\n";
	delete this->_brain;
}

void Dog::makeSound()const{
	std::cout << "ugggggrrrrrrrrgggrrrr\n";
}

