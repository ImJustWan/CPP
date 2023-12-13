#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << _BOLD _GREY "\n🔹 Creating Bureaucrats ! 🔹\n" _END << std::endl;
	Bureaucrat Garou("Garou", 8);
	std::cout << Garou << std::endl;

	// std::cout << _BOLD _GREY "\n🔹 Creating Forms ! 🔹\n" _END << std::endl;
	// const AForm* shrubbers  = new ShrubberyCreationForm();
	// const AForm* guineaPig  = new RobotomyRequestForm();
	// const AForm* inmate  = new PresidentialPardonForm();


	// std::cout << _BOLD _GREY "\n\n🔹 Can our Bureaucrat execute those forms ? 🔹\n" _END << std::endl;
	// try {
	// 	Garou.executeForm(*shrubbers);
	// 	Garou.executeForm(*guineaPig);
	// 	Garou.executeForm(*inmate);
	// }
	// catch(const Bureaucrat::GradeTooLowException &e) {
	// 	std::cout << e.what();
	// }

	Intern newbie;

	AForm *newForm = 0;
	AForm *secondNew = 0;

	std::cout << _BOLD _GREY "\n\n🔹 Calling an intern 🔹\n" _END << std::endl;
	try {
		std::cout << _ITALIC _RIVIERA "🔹 Creating Form \"rrf\" 🔹" _END << std::endl;
		newForm = newbie.makeForm("rrf", "Machine");
		std::cout << _ITALIC _RIVIERA "🔹 Creating Form \"DAKODAK\" 🔹" _END << std::endl;
		secondNew = newbie.makeForm("DAKODAK", "Machine");
	}
	catch(const Intern::UnknownForm &e) {
		std::cout << e.what();
	}

	try {
		std::cout << _BOLD _GREY "\n🔹 Garou tries to executes forms 🔹\n" _END << std::endl;
		Garou.executeForm(*newForm);
		Garou.signForm(*newForm);
		Garou.executeForm(*newForm);
		Garou.executeForm(*secondNew);
	}
	catch(const Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what();
	}
	delete secondNew;
	delete newForm;
	// delete shrubbers;
	// delete guineaPig;
	// delete inmate;
	return 0;
}
