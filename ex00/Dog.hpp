#ifndef DOG_HPP 
#define DOG_HPP

class Dog : public Animal{
	public:
		Dog(); 
		Dog(const Dog &cp);
		Dog &operator=(const Dog &cp);
		~Dog();
		virtual void makeSound()const;
};

#endif // DOG
