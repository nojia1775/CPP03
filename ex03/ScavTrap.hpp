#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# pragma once

# include "ClapTrap.hpp"
# include <cstdio>

class	ScavTrap : public ClapTrap
{
	public:
				ScavTrap(void);
				ScavTrap(std::string name);
				ScavTrap(const ScavTrap& other);
				~ScavTrap(void);
		ScavTrap&	operator=(const ScavTrap& other);

		void		guardGate(void);
};

#endif