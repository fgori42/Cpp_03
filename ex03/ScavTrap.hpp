#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap :virtual public ClapTrap
{
private:
	bool	_stateGuard;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &origin);
	~ScavTrap();
	ScavTrap & operator=(const ScavTrap &origin);

	void attack(const std::string& target);
	void guardGate();
};


#endif