#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	return 0;
}

__attribute__((destructor))
static void destructor(void)
{
	system("leaks -q 'I don’t want to set the world on fire'");
}
