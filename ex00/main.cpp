#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a;
	std::cout << std::endl;
	ClapTrap	b(a);
	std::cout << std::endl;
	ClapTrap	c("test");
	std::cout << std::endl;
	ClapTrap	d = c;
	std::cout << std::endl;
	a.attack("target");
	std::cout << std::endl;
	d.takeDamage(10);
	std::cout << std::endl;
	d.attack("default");
	std::cout << std::endl;
	b.beRepaired(10);
	std::cout << std::endl;
	for (int i = 0; i < 12 ; i++)
		c.beRepaired(1);
	return (0);
}