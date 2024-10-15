#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a;

	a.attack("target");
	a.guardGate();
	ScavTrap b("noah");
	ScavTrap c = b;
	return (0);
}