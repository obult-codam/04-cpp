#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <string>
#include <iostream>

class	Converter
{
public:
	// Canonical
	Converter(std::string input);
	~Converter();

	// Getters
	std::string getCharRep();
	std::string getFloatRep();
	std::string getDoubleRep();
	std::string getIntRep();
private:
	Converter();
	Converter(const Converter& ref);
	Converter& operator=(const Converter& ref);
	int		_intRep;
	float	_floatRep;
	double	_doubleRep;
	int		_flag;
};

#endif
