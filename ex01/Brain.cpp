#include "Animal.hpp"
#include "Brain.hpp"

Brain::Brain(){
}

Brain::Brain(const Brain & cp){
	*this = cp; 
}

Brain &Brain::operator=(const Brain &cp){
	if (this == &cp)
		return *this;
	for (int i = 0; i < 100 ; i++)
		this->_ideas[i] = cp._ideas[i];
	return *this;
}
Brain::~Brain(){
}
