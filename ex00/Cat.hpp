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
	virtual std::string getType() const;
	virtual void setType(std::string type);
	void makeSound() const;
	private:
};

#endif