#include <string>
#include <iostream>
#include <cmath>
#include "Converter.hpp"
#include <sstream>
#include <climits>

Converter::Converter(std::string input) : _flag(0)
{
    try
    {
        _intRep = std::stoi(input);
    }
    catch (const std::exception& e)
    {
        _flag += 1;
    }
    try
    {
        _floatRep = std::stof(input);
    }
    catch (const std::exception& e)
    {
        _flag += 2;
    }
    try
    {
        _doubleRep = std::stod(input);
    }
    catch (const std::exception& e)
    {
        _flag += 4;
    }
}

Converter::~Converter()
{

}

std::string	Converter::getCharRep()
{
    if (_flag & 1 || _intRep < 0)
        return "impossible";
    if (isprint(_intRep))
        return "\'" + std::string(1, (char)_intRep) + "\'";
    return "Non displayable";
}

std::string	Converter::getFloatRep()
{
    std::stringstream   tmp;
    if (_flag & 1 << 1)
        return "impossible";
    tmp << _floatRep;
    if (_floatRep - roundf(_floatRep) == 0)
        tmp << ".0";
    tmp << 'f';
    return tmp.str();
}

std::string	Converter::getDoubleRep()
{
    std::stringstream   tmp;
    if (_flag & 1 << 2)
        return "impossible";
    tmp << _doubleRep;
    if (_doubleRep - roundf(_doubleRep) == 0)
        tmp << ".0";
    return tmp.str();
}

std::string	Converter::getIntRep()
{
    std::stringstream   tmp;
    if (_flag & 1 || _flag & 1 << 1 || (!(_flag & 1 << 1) && INT_MAX < roundf(_floatRep))
                                    || (!(_flag & 1 << 1) && INT_MIN > roundf(_floatRep)))
        return "impossible";
    tmp << _intRep;
    return tmp.str();
}
