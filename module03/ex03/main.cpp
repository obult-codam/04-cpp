#include <ClapTrap.hpp>
#include <DiamondTrap.hpp>
#include <iostream>

int	main(void)
{
	DiamondTrap peer("peer");
	std::cout << peer << std::endl;
	peer.attack("target");
}