#ifndef PhoneBook_H
#define PhoneBook_H 

#include "Contact.h"

class PhoneBook {
public:
	PhoneBook(Contact * contacts = NULL, int numContacts = 0);

	// search accessors 
	string getNameByNumber(const int phoneNumber) const;
	int getNumberByName(const string name) const;
	void printAllContacts() const;

	// mutators 
	void verifyAllContacts();

private:
	Contact * contactList;
	int numContacts;
};

#endif 