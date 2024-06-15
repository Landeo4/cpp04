#include "Brain.hpp"

Brain::Brain()
{

}

Brain::Brain(const Brain &nb)
{
	*this = nb;
}

Brain &Brain::operator=(const Brain &nb)
{
	int i = 0;
	int len = nb.ideas[i].length();
	if (this != &nb)
	{
		while (len > 0)
		{
			this->ideas[i] = nb.ideas[i];
			i++;
			len--;
		}
	}
	return *this;
}

Brain::~Brain()
{

}
