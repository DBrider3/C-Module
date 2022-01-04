#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	name("noName"), hitPoint(C_HP), energyPoint(C_EP), attackDamage(C_AD)
{
	std::cout << GREEN << "ClapTrap " << EOC << name << " Constructor 👋!!" << std::endl;
}

ClapTrap::ClapTrap(std::string param):
	name(param), hitPoint(C_HP), energyPoint(C_EP), attackDamage(C_AD)
{
	std::cout << GREEN << "ClapTrap " << EOC << name << "'s Constructor 👋!!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << GREEN << "ClapTrap " << EOC << name << "'s Destructor 🙇‍♂️!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
	*this = copy;
	std::cout << GREEN << "ClapTrap " << EOC << name << "'s Copy Constructor 👋️!!" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& claptrap)
{
	if (this == &claptrap)
		return (*this);
	name = claptrap.name;
	hitPoint = claptrap.hitPoint;
	energyPoint = claptrap.energyPoint;
	attackDamage = claptrap.attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const& target)
{
	std::cout << GREEN << "ClapTrap " << EOC << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < hitPoint)
		hitPoint -= amount;
	else
		hitPoint = 0;
	std::cout << GREEN << "ClapTrap " << EOC << name << " takeDamage " << amount << " points!, Current HP: " << hitPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoint + amount > MAXHP && amount > hitPoint)
		hitPoint = MAXHP;
	else
		hitPoint += amount;
	std::cout << GREEN << "ClapTrap " << EOC << name << " beRepaired " << amount << " points!, Current HP: " << hitPoint << std::endl;
}