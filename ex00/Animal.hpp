#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string.h>
#include <iostream>
#include <new>

class Animal{
	public:
	Animal();
	Animal(const Animal &nb);
	Animal &operator=(const Animal &a);
	void setType(std::string type);
	std::string getType() const;
	virtual void makeSound() const;
	virtual ~Animal();
	private:

	protected:
		std::string _type;
};

#endif