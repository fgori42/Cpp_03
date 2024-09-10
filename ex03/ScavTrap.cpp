#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {

};

ScavTrap::ScavTrap(std::string name) : ClapTrap("")
{
	_name = name;
	_energy = 50;
	_healt = 100;
	_strengh = 20;
	_stateGuard = false;
	std::cout << "incredible " << _name << " a ScavTrap is here!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "NO! the ScavTrap " << _name << " is gone" << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap &origin) : ClapTrap(origin)
{
	this->_stateGuard = origin._stateGuard;
	std::cout << "ScavTrap cloning calling now the are a new " << _name << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &origin)
{
	if (this != &origin)
	{
		std::cout << "ScavTrap " << this->_name << " now is  " << origin._name << "clone." << std::endl;
		this->_energy = origin._energy;
		this->_healt = origin._healt;
		this->_name = origin._name;
		this->_strengh = origin._strengh;
		this->_stateGuard = origin._stateGuard;
	}
	return(*this);
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << _name << " takes aim at " << target << " and attacks, dealing " << _strengh << " damage." << std::endl;
}

void ScavTrap::guardGate()
{
	_stateGuard = true;
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}