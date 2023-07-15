#include <ClapTrap.hpp>

int	main(void)
{
	ClapTrap henk("Henk");
	ClapTrap peter("Peter");
	henk.takeDamage(5);
	peter.attack("Piet");
	peter.beRepaired(3);
	henk = peter;
	henk.beRepaired(1);
}