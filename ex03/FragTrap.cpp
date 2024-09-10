#include "FragTrap.hpp"

FragTrap::FragTrap() {
};

FragTrap::FragTrap(const std::string &name) : ClapTrap("")
{
	_name = name;
	_healt = 100;
	_energy = 100;
	_strengh = 30;
	std::cout << "Ih evryone " << _name << " FragTrap is here" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " was slayed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &origin) : ClapTrap("")
{
	this->_energy = origin._energy;
	this->_healt = origin._healt;
	this->_name = origin._name;
	this->_strengh = origin._strengh;
	std::cout << "FragTrap " << _name << "was cloned successfully" << std::endl;
}
FragTrap & FragTrap::operator=(const FragTrap &origin)
{
	if (this != &origin)
	{
		std::cout << "FragTrap " << this->_name << " now is  " << origin._name << "a very close friend." << std::endl;
		this->_energy = origin._energy;
		this->_healt = origin._healt;
		this->_name = origin._name;
		this->_strengh = origin._strengh;
	}
	return(*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << ": IH TO EVRYONE, high five!" << std::endl;
}