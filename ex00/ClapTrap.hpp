#include <iostream>
#include <string>

class	ClapTrap
{
	private:
		std::string		_name;
		int			_hp;
		int			_energy;
		int			_ad;

	public:
					ClapTrap(void);
					~ClapTrap(void);

					ClapTrap(const ClapTrap& other);
					ClapTrap(std::string name);
		ClapTrap&		operator=(const ClapTrap& other);

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};