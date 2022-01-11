#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp"
# define RED    "\033[1;31m"
# define GREEN  "\033[1;32m"
# define DARKGREEN "\033[2;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define BROWN "\033[0;40;33m"
# define PRPL "\033[0;35m"
# define EOC    "\033[0;0m"
# define ITALIC "\033[3m"

class Form;

class Bureaucrat
{
	public:

		Bureaucrat(std::string name, int grade);
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& bur);
		Bureaucrat &operator = (const Bureaucrat& bur);
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void isValidGrade(int grade);
		void signForm(Form& form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

	private:
		const std::string _name;
		int _grade;
};

std::ostream& operator << ( std::ostream &out, const Bureaucrat &bur );

#endif
