#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
  private:
	const std::string name;
	int grade;
  Bureaucrat();

  public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
	const std::string &getName() const;
	int getGrade() const;
	void setGrade(int new_grade);
	void incrementGrade();
	void decrementGrade();
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);
#endif
