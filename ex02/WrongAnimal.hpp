#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string.h>
#include <iostream>
#include <new>

class WrongAnimal{
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &nb);
	WrongAnimal &operator=(const WrongAnimal &a);
	void setType(std::string type);
	std::string getType() const;
	void makeSound() const;
	~WrongAnimal();
	private:

	protected:
		std::string _type;
};

#endif