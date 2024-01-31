#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat():Animal("cat"), _brain(new Brain()){
	std::cout << "Cat Derault constructor called\n";
}

Cat::Cat(Cat &cp){
	*this = cp;
}

Cat &Cat::operator=(Cat &cp){
	if (this == &cp){
		return *this;
	}
	this->type = cp.type;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat Derault destructor called\n";
	delete this->_brain;
}

void Cat::makeSound()const{
	std::cout << "meowmeowmewo\n";
}
