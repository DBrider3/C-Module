#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

# define RED    "\033[0;31m"
# define GREEN  "\033[0;32m"
# define DARKGREEN "\033[2;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define BROWN "\033[0;40;33m"
# define PRPL "\033[0;35m"
# define EOC    "\033[0;0m"
# define ITALIC "\033[3m"

class Animal
{
	public:
		Animal();
		Animal(std::string param);
		virtual ~Animal();
		Animal(const Animal& copy);
		Animal& operator = (const Animal& animal);
		std::string getType() const;
		virtual void makeSound() const;

	protected:
		std::string type;

};

#endif