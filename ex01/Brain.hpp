#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string.h>
#include <iostream>
#include <new>

class Brain
{
	public:
	Brain();
	Brain(const Brain &nb);
	Brain &operator=(const Brain &nb);
	~Brain();
	std::string ideas[100];
	private:
};

#endif