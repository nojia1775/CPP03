#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# pragma once

# include "ClapTrap.hpp"
# include <cstdio>

class	ScavTrap : public virtual ClapTrap
{
	private:
		bool		_gateMode;

	protected:
		int		_scav_hp;
		int		_scav_energy;
		int		_scav_ad;

	public:
				ScavTrap(void);
				ScavTrap(std::string name);
				ScavTrap(const ScavTrap& other);
				~ScavTrap(void);
		ScavTrap&	operator=(const ScavTrap& other);

		void		guardGate(void);
		void		attack(const std::string &target);
		int		getScavHitPoints(void) const;
		int		getScavEnergy(void) const;
		int		getScavAttackPoints(void) const;
};

#endif