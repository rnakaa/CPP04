#ifndef DOG_HPP 
#define DOG_HPP

class Dog : public Animal{
	public:
		Dog(); 
		Dog(Dog &cp);
		Dog &operator=(Dog &cp);
		~Dog();
		virtual void makeSound()const;
};

#endif // DOG
