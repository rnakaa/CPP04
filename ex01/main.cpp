#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
	{
		std::cout << "pdf test" << std::endl;
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
	}
	std::cout << "---------------------------------------------" << std::endl;
	{
		std::cout << "deep copy test" << std::endl;
		Dog dog1;
		Dog dog2;
		dog2 = dog1;
		std::cout << "dog1 idea 2 = " << dog1.getIdea(2) << std::endl;
		std::cout << "dog2 idea 2 = " << dog2.getIdea(2) << std::endl;
		std::cout << "deep copy" << std::endl;
		dog1.addIdea(2, "namunamu");
		std::cout << "dog1 idea 2 = " << dog1.getIdea(2) << std::endl;
		std::cout << "dog2 idea 2 = " << dog2.getIdea(2) << std::endl;
	}
	std::cout << "\n" << std::endl;
	return 0;
}

__attribute__((destructor))
static void destructor(void)
{
	system("leaks -q 'I don’t want to set the world on fire'");
}
