#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <exception>

class	Brain
{
public:
	Brain();
	Brain(const Brain& ref);
	Brain& operator=(const Brain& ref);
	~Brain();
	void setIdea(int index, std::string idea);
	std::string getIdea(int index);
	class OutOfBound : public std::exception {
		virtual const char* what() const throw (); 
		};
private:
	std::string _ideas[100];
};

#endif
