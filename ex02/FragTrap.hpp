#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "iostream"
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	
public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &origin);
	~FragTrap();

	FragTrap & operator=(const FragTrap &origin);
	void highFivesGuys(void);
};

FragTrap::FragTrap(const std::string &name)
{
}

FragTrap::~FragTrap()
{
}


#endif