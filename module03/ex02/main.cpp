#include <ClapTrap.hpp>
#include <FragTrap.hpp>

int	main(void)
{
	ClapTrap henk("Henk");
	ClapTrap peter("Peter");
	henk.takeDamage(5);
	peter.attack("Piet");
	peter.beRepaired(3);
	FragTrap peer("Peer");
	peer.highFiveGuys();

}