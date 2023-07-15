#include <Zombie.hpp>

int		main(void) {
	randomChump("Zom-B");
	randomChump("Zom-C");
	Zombie *A = newZombie( "A" );
	A->announce();
	delete A;
	while (true);
}