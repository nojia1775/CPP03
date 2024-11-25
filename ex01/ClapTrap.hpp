#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# pragma once

# include <iostream>
# include <string>

class	ClapTrap
{
	protected:
		std::string		_name;
		int			_hp;
		int			_energy;
		int			_ad;

	public:
					ClapTrap(void);
					ClapTrap(const ClapTrap& other);
					ClapTrap(std::string name);
					~ClapTrap(void);
		ClapTrap&		operator=(const ClapTrap& other);

		virtual void		attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif