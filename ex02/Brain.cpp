#include "Animal.hpp"
#include "Brain.hpp"

Brain::Brain(){
	std::cout << "--- Brain Default constructor called ---" << std::endl;
	for (int i = 0; i < 100 ; i++)
		this->_ideas[i] = "default";
}

Brain::Brain(const Brain & cp){
	std::cout << "--- Brain Copy constructor called ---" << std::endl;
	*this = cp; 
}

Brain &Brain::operator=(const Brain &cp){
	std::cout << "--- Brain Copy assign operator called ---" << std::endl;
	if (this == &cp)
		return *this;
	for (int i = 0; i < 100 ; i++)
		this->_ideas[i] = cp._ideas[i];
	return *this;
}
Brain::~Brain(){
	std::cout << "--- Brain Default destructor called ---" << std::endl;
}

void Brain::addIdea(int i, std::string idea){
	this->_ideas[i] = idea;
}

std::string Brain::getIdea(int i){
	return this->_ideas[i];
}
