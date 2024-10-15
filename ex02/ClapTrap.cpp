#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default")
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	_hp = 10;
	_energy = 10;
	_ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name)
{
	std::cout << "Copy ClapTrap " << _name << " constructor called" << std::endl;
	_hp = other._hp;
	_energy = other._energy;
	_ad = other._ad;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
	_hp = 10;
	_energy = 10;
	_ad = 0;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_energy = other._energy;
		this->_ad = other._ad;
	}
	std::cout << "Copy operator ClapTrap " << _name << " constructor called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " took " << amount << " damage points." << std::endl;
	this->_hp -= amount;
	if (_hp < 0)
		_hp = 0;
	std::cout << "ClapTrap " << _name << " has now " << _hp << " hit points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no _energy points left. It can't repair itself." << std::endl;
		return ;
	}
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points left. It can't repair itself." << std::endl;
	}
	std::cout << "ClapTrap " << _name << " repaired itself " << amount << " hit points.";
	this->_hp += amount;
	this->_energy--;
	std::cout << " ClapTrap " << _name << " has now " << _hp << " hit points." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points left. It can't attack " << target << "." << std::endl;
		return ;
	}
	if (_energy <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no _energy points left. It can't attack " << target << "." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	this->_energy--;
}