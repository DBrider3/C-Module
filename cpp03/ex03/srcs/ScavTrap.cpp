#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << RED << "ScavTrap " << EOC << name << " Constructor~🙌" << std::endl;
	hitPoint = S_HP;
	energyPoint = S_EP;
	attackDamage = S_AD;
	guardMode = GM_OFF;
}

ScavTrap::ScavTrap(std::string param): ClapTrap(param)
{
	std::cout << RED << "ScavTrap " << EOC << name << "'s Constructor~🙌" << std::endl;
	hitPoint = S_HP;
	energyPoint = S_EP;
	attackDamage = S_AD;
	guardMode = GM_OFF;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap " << EOC << name << "'s Destructor~🙇" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
	*this = copy;
	std::cout << RED << "ScavTrap " << EOC << name << "'s Copy Constructor~🙌" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& scavtrap)
{
	if (this == &scavtrap)
		return (*this);
	ClapTrap::operator=(scavtrap);
	return (*this);
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (energyPoint >= 25 && guardMode)
	{
		energyPoint -= 25;
		if (energyPoint < 25)
		{
			std::cout << RED << "ScavTrap " << EOC << name << " GuardMode OFF! " << ", Current EP: " << energyPoint << std::endl;
			guardMode = GM_OFF;
			energyPoint = 0;
			return ;
		}
		std::cout << RED << "ScavTrap " << EOC << name << " GuardMode EXECUTE! " << ", Current EP: " << energyPoint << std::endl;
	}
	else
	{
		hitPoint = amount < hitPoint ? hitPoint - amount : 0;
		std::cout << RED << "ScavTrap " << EOC << name << " takeDamage " << amount << " points!, Current HP: " << hitPoint << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (!guardMode && energyPoint >= 25)
	{
		std::cout << RED << "ScavTrap " << EOC << name << " GuardMode ON! " << ", Current EP: " << energyPoint << std::endl;
		guardMode = GM_ON;
	}
	else
	{
		std::cout << RED << "ScavTrap " << EOC << name << "'ve not enough energyPoint!, Current EP: " << energyPoint << std::endl;
		guardMode = GM_OFF;
	}
}

void ScavTrap::attack(std::string const& target)
{
	ClapTrap::attack(target);
}