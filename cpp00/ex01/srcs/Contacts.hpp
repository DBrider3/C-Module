#ifndef CONTACTS_HPP
#define CONTACTS_HPP
#include <iostream>


class Contacts
{
	private:
		int	idx;
		std::string fName;
		std::string lName;
		std::string pNumber;
		std::string dSecret;
	public:
		void setfName(std::string);
		void setlName(std::string);
		void setpNumber(std::string);
		void setdSecret(std::string);
		std::string getfName(void);
		std::string getlName(void);
		std::string getpNumber(void);
		std::string getdSecret(void);
};

#endif
