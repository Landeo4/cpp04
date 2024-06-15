#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string.h>
#include <iostream>
#include <new>

class AAnimal{
	public:
	AAnimal();
	AAnimal(const AAnimal &nb);
	AAnimal &operator=(const AAnimal &a);
	void setType(std::string type);
	std::string getType() const;
	virtual void makeSound() const = 0;
	virtual ~AAnimal();
	private:

	protected:
		std::string _type;
};

#endif