#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	_name = name;
	ClapTrap::attack("jon");
	_healt = FragTrap::_healt;
	_energy = ScavTrap::_energy;
	_strengh = FragTrap::_strengh;
	std::cout << "Ih, i am " << _name << " a perfect DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " perish" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original) : ClapTrap(original._name + "_clap_name"), ScavTrap(original._name), FragTrap(original._name)
{
	this->_energy = original._energy;
	this->_healt = original._healt;
	this->_name = original._name;
	this->_strengh = original._strengh;
	std::cout << _name << " started cloning diamondtrap process" << std::endl;
}
DiamondTrap & DiamondTrap::operator=(const DiamondTrap &original)
{
	if (this != &original)
	{
		std::cout << "ScavTrap " << this->_name << " now is  " << original._name << "clone." << std::endl;
		this->_energy = original._energy;
		this->_healt = original._healt;
		this->_name = original._name;
		this->_strengh = original._strengh;
	}
	return(*this);
}
void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI()
{
	std::cout << "ih, I am a DiamondTrap, my name is " << _name << ", but i am " << ClapTrap::_name << " too, my Claptrap name" << std::endl; 
}