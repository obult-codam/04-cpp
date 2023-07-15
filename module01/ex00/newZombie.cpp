#include <Zombie.hpp>

// needs to be deleted correctly before the end of the program

Zombie* newZombie( std::string name ) {
	Zombie* brainEater = new Zombie;
	if (brainEater == NULL)
		return (NULL);
	brainEater->setName( name );
	return brainEater;
}