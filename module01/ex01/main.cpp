#include <Zombie.hpp>
#include <stdlib.h>

int		main(void) {
	int n = 5;

	Zombie*	horde = zombieHorde( n, "member" );
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	system("leaks eaters.exe");
}
