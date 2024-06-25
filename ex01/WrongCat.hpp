#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(const WrongCat &nb);
	WrongCat &operator=(const WrongCat &a);
	~WrongCat();
	
	std::string getType() const;
	void setType(std::string type);
	void makeSound() const;
	private:
};

#endif