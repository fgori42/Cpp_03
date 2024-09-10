#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap jon("Jon");
	ScavTrap ale("ale");

	for(int i = 0; i<70;i++)
	{
		jon.attack("ale");
		ale.takeDamage(20);
		ale.beRepaired(20);
	}
}