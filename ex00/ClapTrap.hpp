#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_healt;
	int			_energy;
	int			_strengh;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &origin);
	ClapTrap & operator = (const ClapTrap &Clap);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif