#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hp = 100;
	_energy = 50;
	_ad = 20;
	_scav_hp = 100;
	_scav_energy = 50;
	_scav_ad = 20;
	_gateMode = false;
	std::cout << "ScavTrap " << _name << " default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 50;
	_ad = 20;
	_scav_hp = 100;
	_scav_energy = 50;
	_scav_ad = 20;
	_gateMode = false;
	std::cout << "ScavTrap " << _name << " constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	_name = other._name;
	_hp = other._hp;
	_energy = other._energy;
	_ad = other._ad;
	_scav_hp = other._hp;
	_scav_energy = other._energy;
	_scav_ad = other._ad;
	_gateMode = other._gateMode;
	std::cout << "ScavTrap " << _name << " copy default constructor called." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " destructor called." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_energy = other._energy;
		_ad = other._ad;
		_gateMode = other._gateMode;
	}
	std::cout << "ScavTrap " << _name << " assignation constructor called." << std::endl;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (_gateMode)
	{
		std::cout << "ScavTrap " << _name << " is already in gate keeper mode" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!" << std::endl;
	_gateMode = true;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hp <= 0)
	{
		std::cout << "ScavTrap " << _name << " is dead. It can't attack" << std::endl;
		return;
	}
	if (_energy <= 0)
	{
		std::cout << "ScavTrap " << _name << " doesn't have enough energy to attack" << std::endl;
		return;
	}
	this->_energy--;
	std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _ad << " points of damage!" << std::endl;
}

int	ScavTrap::getScavHitPoints(void) const
{
	return _scav_hp;
}

int	ScavTrap::getScavEnergy(void) const
{
	return _scav_energy;
}

int	ScavTrap::getScavAttackPoints(void) const
{
	return _scav_ad;
}