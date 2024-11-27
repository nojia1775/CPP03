#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_hp = 100;
	_energy = 100;
	_ad = 30;
	_frag_hp = 100;
	_frag_energy = 100;
	_frag_ad = 30;
	std::cout << "FragTrap " << _name << " default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 100;
	_ad = 30;
	_frag_hp = 100;
	_frag_energy = 100;
	_frag_ad = 30;
	std::cout << "FragTrap " << _name << " constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	_hp = other._hp;
	_energy = other._energy;
	_ad = other._ad;
	_frag_hp = other._frag_hp;
	_frag_energy = other._frag_energy;
	_frag_ad = other._frag_ad;
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
	_frag_hp = other._frag_hp;
	_frag_energy = other._frag_energy;
	_frag_ad = other._frag_ad;
	std::cout << "FragTrap " << _name << " assignation constructor called." << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "High Fives Guys !!!" << std::endl;
}

int	FragTrap::getFragHitPoints(void) const
{
	return _frag_hp;
}

int	FragTrap::getFragEnergy(void) const
{
	return _frag_energy;
}

int	FragTrap::getFragAttackPoints(void) const
{
	return _frag_ad;
}