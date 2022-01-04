#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define MAXHP 100

# define RED    "\033[0;31m"
# define GREEN  "\033[0;32m"
# define DARKGREEN "\033[2;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define PRPL "\033[0;35m"
# define EOC    "\033[0;0m"
# define ITALIC "\033[3m"

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string param);
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator = (const ClapTrap& claptrap);
		void attack(std::string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string	name;
		unsigned int hitPoint;
		unsigned int energyPoint;
		unsigned int attackDamage;

};

#endif