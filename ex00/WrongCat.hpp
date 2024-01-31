#ifndef WRONGCAT_HPP 
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(WrongCat &cp);
		WrongCat &operator=(WrongCat &cp);
		~WrongCat();
		void makeSound()const;
};

#endif // CAT
