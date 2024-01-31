#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat():Animal("cat"){
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
}

void Cat::makeSound()const{
	std::cout << "meowmeowmewo\n";
}

