#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _healt(10), _energy(10), _strengh(0)
{
	_name = name;
	std::cout << "A ClapTrap called " << _name << " enters the battlefield." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " was destroied." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &origin) : _healt(10), _energy(10), _strengh(0) 
{
	this->_name = origin._name;
	std::cout << _name << " clone himself!!" << std::endl;
}

ClapTrap & ClapTrap::operator = (const ClapTrap &Clap)
{
	if (this != &Clap)
	{
		std::cout << this->_name << " was infected by " << Clap._name << "; now he's his clone." << std::endl;
		this->_energy = Clap._energy;
		this->_healt = Clap._healt;
		this->_name = Clap._name;
		this->_strengh = Clap._strengh;
	}
	return(*this);
}


void ClapTrap::attack(const std::string& target)
{
	if (_energy > 0 && _healt > 0)
	{
		_energy -= 1;
		std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _strengh << " point of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " doesn't move, he has no energy" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " take " << amount << " of damage!" << std::endl;
	_healt -= amount;
	if (_healt <= 0)
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0 && _healt > 0)
	{
		_energy -= 1;
		std::cout << "ClapTrap " << _name << " repaired himsel, he gain " << amount << " healt_point!" << std::endl;
		_healt += amount;
	}
	else
		std::cout << "ClapTrap " << _name << " doesn't move, he has no energy" << std::endl;
}