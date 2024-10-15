#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap()
{
	this->_name = "default";
	this->ClapTrap::_name = _name + "_clap_name";
}