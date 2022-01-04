#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	name = "noName";
	ClapTrap::name += "_clap_name";
	hitPoint = F_HP;
	energyPoint = S_EP;
	attackDamage = F_AD;
	std::cout << BLUE << "DiamondTrap " << EOC << name << " Constructor~💍" << std::endl;
	std::cout << BLUE << "DiamondTrap " << EOC << "State -> { hitPoint: " << hitPoint << " energyPoint: " << energyPoint << " attackDamage: " << attackDamage << " } " << std::endl;

}

DiamondTrap::DiamondTrap(std::string param)
	: ClapTrap(param + "_clap_name")
{
	name = param;
	hitPoint = F_HP;
	energyPoint = S_EP;
	attackDamage = F_AD;
	std::cout << BLUE << "DiamondTrap " << EOC << name << "'s Constructor~💍" << std::endl;
	std::cout << BLUE << "DiamondTrap " << EOC << "State -> { hitPoint: " << hitPoint << " energyPoint: " << energyPoint << " attackDamage: " << attackDamage << " } " << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << BLUE << "DiamondTrap " << EOC << name << "'s Destructor~💍" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& copy)
	: ClapTrap(copy)
{
	*this = copy;
	std::cout << BLUE << "DiamondTrap " << EOC << name << "'s Copy Constructor~🙌" << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& diamond)
{
	if (this == &diamond)
		return (*this);
	ClapTrap::operator=(diamond);
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << BLUE << "MyTrap "<< EOC "Name is " << name << std::endl;
	std::cout << GREEN << "ClapTrap " << EOC << "Name is " << ClapTrap::name << std::endl;
}