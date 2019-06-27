#include "PhoneBook.h"
#include "Contact.h"
#include <iostream> 

// constructor -----------
PhoneBook::PhoneBook(Contact * contacts, int _numContacts){
	if (_numContacts){
		numContacts = _numContacts;
		contactList = new Contact [numContacts];
		for (int i = 0; i < numContacts; i++){
			contactList[i] = Contact((contacts+i)->getName(),
									(contacts+i)->getPhoneNumber(),
									*(contacts+i)->getEmergencyContact());
		}
	}
}

// accessors ---------------------

int PhoneBook::getNumberByName(const string _name) const {
	// steps through the list of contacts and compares each name to the 
	// parameter _name and returns the phone number if found. 
	// if not found, return -1. 
	// NOTE: remember that '==' is not sufficient for string compare.
	//
	// CODE HERE

	return -1; // None found 
}

string PhoneBook::getNameByNumber(const int _number) const {
	// steps through the list of contacts and compares each number to the 
	// parameter _number and returns the name if found. 
	// if not found, return NULL. 
	//
	// CODE HERE

	return NULL; // None found 
}

// call to print all Contacts from the given PhoneBook
// print format is a different contact on each line, and each
// line contains:
// 		name  	phoneNumber 	emergencyContact 
void PhoneBook::printAllContacts() const {
	std::cout << "\nnum contacts: " << numContacts << std::endl;
	for (int i = 0; i < numContacts; i++){
		std::cout << contactList[i].getName() << " " <<
			contactList[i].getPhoneNumber() << " " << 
			contactList[i].getEmergencyContact() << std::endl; 
	}
}


void PhoneBook::verifyAllContacts(){
	// From the given PhoneBook object, call the verifyPhoneNumber()
	// from each of the Contacts contained in the private variable 
	// contactList, and also on the emergency contacts from each of 
	// the contacts. 
	// Remove all Contacts that do not have a valid phoneNumber from the 
	// array (and just remove invalid emergencyContacts from valid Contacts,
	// do not remove entire Contact from array) and resize the array so 
	// that there are no gaps after removing the Contacts. 
	// HINT: resizing an array is hard... it is sometimes easier to simply 
	// make a new one. 
	// 
	// CODE GOES HERE 

}



