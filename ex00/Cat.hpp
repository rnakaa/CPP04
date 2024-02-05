#ifndef CAT_HPP 
#define CAT_HPP

class Cat : public Animal{
	public:
		Cat();
		Cat(const Cat &cp);
		Cat &operator=(const Cat &cp);
		~Cat();
		virtual void makeSound()const;
};

#endif // CAT
