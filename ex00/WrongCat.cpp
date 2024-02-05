#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("wrongcat"){
}

WrongCat::WrongCat(const WrongCat &cp){
	*this = cp;
}

WrongCat &WrongCat::operator=(const WrongCat &cp){
	if (this == &cp){
		return *this;
	}
	this->type = cp.type;
	return *this;
}

WrongCat::~WrongCat(){
}

void WrongCat::makeSound()const{
	std::cout << "meowmeowmewo\n";
}

