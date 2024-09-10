#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap jon("Jon");
	FragTrap ale("ale");
	FragTrap b(ale);

	ale.attack("Jon");
	b.highFivesGuys();
}