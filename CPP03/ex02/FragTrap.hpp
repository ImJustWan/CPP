#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap();

	FragTrap & operator=( FragTrap const & rhs );

	void	attack(const std::string& target);
	void 	highFivesGuys(void);

};
