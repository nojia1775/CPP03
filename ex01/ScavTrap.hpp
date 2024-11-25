#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# pragma once

# include "ClapTrap.hpp"
# include <cstdio>

class	ScavTrap : public ClapTrap
{
	private:
		bool		_gateMode;
	public:
				ScavTrap(void);
				ScavTrap(std::string name);
				ScavTrap(const ScavTrap& other);
				~ScavTrap(void);
		ScavTrap&	operator=(const ScavTrap& other);

		void		guardGate(void);
		void		attack(const std::string &target);
};

#endif