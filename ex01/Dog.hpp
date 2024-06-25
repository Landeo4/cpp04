#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
	Dog();
	Dog(const Dog &nb);
	Dog &operator=(const Dog &a);
	~Dog();
	
	virtual std::string getType() const;
	virtual void setType(std::string type);
	void makeSound() const;
	std::string getIdea(int id);
	void SetIdea(int id, std::string idea);
	private:
	Brain* _bn;
};

#endif