#ifndef CAT_HPP 
#define CAT_HPP

class Cat : public Animal{
	public:
		Cat();
		Cat(Cat &cp);
		Cat &operator=(Cat &cp);
		~Cat();
		virtual void makeSound()const;
};

#endif // CAT
