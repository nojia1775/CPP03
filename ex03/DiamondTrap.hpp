#ifndef DIAMOND_TRAP

# define DIAMOND_TRAP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	
	public:
				DiamondTrap(void);
				~DiamondTrap(void);

				DiamondTrap(std::string name);
				DiamondTrap(const DiamondTrap& other);
		DiamondTrap&	operator=(const DiamondTrap& other);

		void		whoAmI(void) const;
		int		getHitPoints(void) const;
		int		getEnergy(void) const;
		int		getAttackPoints(void) const;
};

#endif