#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	protected:
		int		_frag_hp;
		int		_frag_energy;
		int		_frag_ad;

	public:
				FragTrap(void);
				FragTrap(const std::string name);
				FragTrap(const FragTrap& other);
				~FragTrap(void);
		FragTrap&	operator=(const FragTrap& other);

		void		highFivesGuys(void) const;
		int		getFragHitPoints(void) const;
		int		getFragEnergy(void) const;
		int		getFragAttackPoints(void) const;
};

#endif