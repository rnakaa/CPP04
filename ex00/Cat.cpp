#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat():Animal("cat"){
}

Cat::Cat(const Cat &cp){
	*this = cp;
}

Cat &Cat::operator=(const Cat &cp){
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

