#pragma once

#include <iostream>
#include "colors.hpp"

enum e_type {
	_CHAR,
	_INT,
	_FLOAT,
	_DOUBLE,
	_NAN,
	_INF,
	_INV
};

class ScalarConverter {	

private:

	ScalarConverter( void );
	~ScalarConverter( void );

	static void		setType(std::string const brut);
	static int		numberz(std::string brut);

	static void		print_char(std::string brut);
	static void		print_int(std::string brut);
	static void		print_float(std::string brut);
	static void		print_double(std::string brut);
	static void		print_nan(std::string brut);
	static void		print_inf(std::string brut);

	static int		_type;

public:
	static void	convert(std::string const brut);

class FailedConversion : public std::exception
	{
		public:
			virtual const char * what() const throw() {
				return(_BOLD _SALMON "ERROR : non convertible string\n" _END);
			}
	};
};
