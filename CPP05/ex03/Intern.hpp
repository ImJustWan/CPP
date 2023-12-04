#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:

	Intern();
	Intern(Intern const & src);
	~Intern();

	Intern 					&operator=( Intern const & rhs );

	AForm					*makeForm(std::string formName, std::string target);

};
