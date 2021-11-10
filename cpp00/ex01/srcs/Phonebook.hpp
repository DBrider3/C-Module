#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "Contacts.hpp"

class PhoneBook
{
	private:
		Contacts contact[8];

	public:
		PhoneBook(){
			std::cout << "Hello Phonebook!!" << std::endl;
		}
		void add(void);
		void search(void);
		~PhoneBook(){
			std::cout << "Bye~~🥴!!" << std::endl;
		}
};

#endif
