#include "ClapTrap.hpp"

int main()
{
	ClapTrap	jon("Jon");
	ClapTrap	clap(jon);
	ClapTrap	poul("Poul");
	ClapTrap	jack("Jack");

	poul = jon;
	for (int i = 0; i < 11; i++)
	{
		jon.attack("Jack");
		jack.takeDamage(1);
		jack.beRepaired(2);
	}
	jon.attack("Jack");
}