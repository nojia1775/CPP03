#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "default";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hp = this->getFragHitPoints();
	this->_energy = this->getScavEnergy();
	this->_ad = this->getFragAttackPoints();
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hp = this->getFragHitPoints();
	this->_energy = this->getScavEnergy();
	this->_ad = this->getFragAttackPoints();
	std::cout << "DiamondTrap " << _name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	this->_name = other._name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_ad = other._ad;
	std::cout << "DiamondTrap " << _name << " copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->ClapTrap::_name = this->_name + "_clap_name";
		this->_hp = other._hp;
		this->_energy = other._energy;
		this->_ad = other._ad;
		std::cout << "DiamondTrap " << _name << " operator called" << std::endl;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << _name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}

int	DiamondTrap::getHitPoints(void) const
{
	return _hp;
}

int	DiamondTrap::getEnergy(void) const
{
	return _energy;
}

int	DiamondTrap::getAttackPoints(void) const
{
	return _ad;
}