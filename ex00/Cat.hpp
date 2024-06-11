#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	public:
	Cat();
	Cat(const Cat &nb);
	Cat &operator=(const Cat &a);
	~Cat();
	std::string getType();
	void setType(std::string type);
	virtual void makeSound();
	private:
};

#endif