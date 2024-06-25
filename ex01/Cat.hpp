#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
	Cat();
	Cat(const Cat &nb);
	Cat &operator=(const Cat &a);
	~Cat();
	
	virtual std::string getType() const;
	virtual void setType(std::string type);
	std::string getIdea(int id);
	void SetIdea(int id, std::string idea);
	void makeSound() const;
	private:
	Brain* _bn;
};

#endif