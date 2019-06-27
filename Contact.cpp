#include <iostream>
#include "Contact.h"

// constructors
Contact::Contact(string _name, int _phoneNumber):
	name (_name),
	phoneNumber (_phoneNumber),
	emergencyContact (NULL) {} 

Contact::Contact(string _name, int _phoneNumber, Contact & _emergencyContact):
	name (_name),
	phoneNumber(_phoneNumber),
	emergencyContact (&_emergencyContact) {} 


// accessors  --------------------

// this function is used to verify that the private variable phoneNumber
// is 7-digits long, as it should be. 
bool Contact::verifyPhoneNumber() const {
	if (phoneNumber >= 1000000
		&& phoneNumber <= 9999999){ 
		return true;
	}
	return false; 
}
string Contact::getName() const {
	return name;
}
int Contact::getPhoneNumber() const {
	return phoneNumber;
}
Contact* Contact::getEmergencyContact() const{
	return emergencyContact;
}

// mutators  ----------------------

// sets phoneNumber to be argument newNumber 
void Contact::changeNumber(const int newNumber){
	phoneNumber = newNumber;
}
void Contact::changeNumber(const Contact * newContact){
	// sets the phone number of contact to be the phone number
	// of the Contact parameter newContact 
	//
	// CODE HERE
}
// sets name to be argument newName  
void Contact::changeName(const string newName){
	name = newName;
}
void Contact::changeName(const Contact * newContact){
	// sets the name of contact to be the name
	// of the Contact parameter newContact 
	//
	// CODE HERE
}
void Contact::setEmergencyContact(Contact & _emergencyContact){
	// sets the emergencyContact of contact to be the address
	// of the Contact parameter _emergencyContact 
	//
	// CODE HERE
}