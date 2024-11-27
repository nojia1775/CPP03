#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	DiamondTrap a("test");
	std::cout << a.getHitPoints() << " " << a.getEnergy() << " " << a.getAttackPoints() << std::endl;
	a.whoAmI();
	return 0;
}