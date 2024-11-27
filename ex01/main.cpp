#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a;

	a.attack("target");
	a.guardGate();
	a.guardGate();
	ScavTrap b("noah");
	ScavTrap c = b;
	b.attack("moi");
	return (0);
}