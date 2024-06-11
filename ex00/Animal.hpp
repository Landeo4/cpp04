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
	const void makeSound();
	void setType(std::string type);
	const std::string getType();
	~Animal();
	private:

	protected:
		std::string _type;
};

#endif