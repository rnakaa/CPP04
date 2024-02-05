#ifndef WRONGCAT_HPP 
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(const WrongCat &cp);
		WrongCat &operator=(const WrongCat &cp);
		~WrongCat();
		void makeSound()const;
};

#endif // WEONGCAT
