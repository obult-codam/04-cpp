#include <Zombie.hpp>

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie* eaters;
	int i;

	i = 0;
	eaters = new Zombie[N];
	for (int i = 0; i < N; i++)
		eaters[i].setName(name);
	return eaters;
}