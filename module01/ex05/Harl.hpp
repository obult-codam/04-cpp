#ifndef HARL_HPP
# define HARL_HPP

#include <string>

enum {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

class Harl
{
private:
    std::string str_levels[4];
    typedef void (Harl::*complaints)();
    // void    (Harl::*levels [4])();
    complaints  levels[4];
    void    debug( void );
    void    info ( void );
    void    warning( void );
    void    error( void );
public:
    Harl();
    ~Harl();
    void    complain(std::string level);
};

#endif