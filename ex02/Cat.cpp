#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat():Animal("cat"), _brain(new Brain()){
	std::cout << "--- Cat Default constructor called ---\n";
}

Cat::Cat(const Cat &cp){
	std::cout << "--- Cat Copy constructor called ---\n";
	if (cp._brain)
		this->_brain = new Brain(*(cp._brain));
	else
		this->_brain = NULL;
}

Cat &Cat::operator=(const Cat &cp){
	std::cout << "--- Cat Copy assignment opeator called ---\n";
	if (this == &cp){
		return *this;
	}
	this->type = cp.type;
	delete this->_brain;
	this->_brain = new Brain(*(cp._brain));
	return *this;
}

Cat::~Cat(){
	std::cout << "--- Cat Derault destructor called ---\n";
	delete this->_brain;
}

void Cat::makeSound()const{
	std::cout << "meowmeowmewo\n";
}

std::string Cat::getIdea(int i)const{
	if (i < 0 || 100 < i)
		return "out of range";
	return this->_brain->getIdea(i);
}

void Cat::addIdea(int i, std::string idea){
	if (i < 0 || 100 < i)
		return ;
	this->_brain->addIdea(i, idea);
}
