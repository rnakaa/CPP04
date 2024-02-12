#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog():Animal("dog"), _brain(new Brain()){
	std::cout << "--- Dog Default constructor called ---\n";
}

Dog::Dog(const Dog &cp){
	std::cout << "--- Dog Copy constructor called ---\n";
	if (cp._brain)
		this->_brain = new Brain(*(cp._brain));
	else
		this->_brain = NULL;
}

Dog &Dog::operator=(const Dog &cp){
	std::cout << "--- Dog Copy assign operator called ---\n";
	if (this == &cp){
		return *this;
	}
	this->type = cp.type;
	delete this->_brain;
	this->_brain = new Brain(*(cp._brain));
	return *this;
}

Dog::~Dog(){
	std::cout << "--- Dog Default destructor called ---\n";
	delete this->_brain;
}

void Dog::makeSound()const{
	std::cout << "ugggggrrrrrrrrgggrrrr\n";
}

std::string Dog::getIdea(int i)const{
	if (i < 0 || 100 < i)
		return "out of range";
	return this->_brain->getIdea(i);
}

void Dog::addIdea(int i, std::string idea){
	if (i < 0 || 100 < i)
		return ;
	this->_brain->addIdea(i, idea);
}
