#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_hp = 100;
	_energy = 100;
	_ad = 30;
	std::cout << "FragTrap " << _name << " default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 100;
	_ad = 30;
	std::cout << "FragTrap " << _name << " constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	_hp = 100;
	_energy = 100;
	_ad = 30;
	std::cout << "FragTrap " << _name << " copy constructor called." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " destructor called." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	if (this == &other)
		return (*this);
	_name = other._name;
	_hp = other._hp;
	_energy = other._energy;
	_ad = other._ad;
	std::cout << "FragTrap " << _name << " assignation constructor called." << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives Guys !!!" << std::endl;
}