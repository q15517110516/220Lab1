#include "Contact.h"
#include "PhoneBook.h"
#include <iostream>
#include <cstdlib>
#include <cassert>

int myrand(int upper){
	return rand()%upper;
}

// generate a random sequence of lowercase characters of length
// 1-8, return as string.
string generateRandomName(){
	int stringLength = 1+ myrand(8); // 8 char max, 1 char min

	char* mystring = new char [stringLength+1];
	mystring[stringLength] = '\0'; // null terminated string

	for (int i = 0; i < stringLength; i++){
		mystring[i] = 'a' + myrand(26);
	}
	return string(mystring);
}

// generate a random long integer number. May or may not be 7 digits.
int generateRandomNumber(){
	return myrand(9999999);
}

// generate a random Contact.
Contact generateRandomContact(){
	// The name will be created with
	// generateRandomName() and phone number will be created with
	// generateRandomNumber(). Using the above random function,
	// with 50% probability assign a new Contact as the emergencyContact
	// of the one just generated. Otherwise leave it NULL (default).
	// Then return this Contact.
	//
	// CODE HERE

	return Contact();  // PLACEHOLDER; don't keep here
}

// takes an int num as input and generates num Contacts in an array
// and returns a pointer to the first of the array.
// Calls generateRandomContact for each element of the array.
Contact * generateRandomContacts(int num){
	Contact* outList = new Contact[num];

	for (int i = 0; i < num; ++i){
		outList[i] = generateRandomContact();
	}
	return outList;
}

// --------------  tests  --------------------------------------

void testChangeNumber(){
	Contact c (Contact("blaah",1000802));
	int cNum = c.getPhoneNumber();
	c.changeNumber(5000000);
	assert(c.getPhoneNumber() != cNum); // assert number has changed
	assert(c.getPhoneNumber() == 5000000);
	std::cout << "changeNumber(...) passed" << std::endl;
}

void testChangeName(){
	Contact c (Contact("blaah",1000802));
	string cName = c.getName();
	c.changeName("blah1");
	assert(c.getName().compare(cName) != 0); // assert name has changed
	assert(c.getName().compare("blah1") == 0);
	std::cout << "changeName(...) passed" << std::endl;
}

void testSetEmergencyContact(){
	Contact c1 = Contact("blaah",1000802);
	Contact c2 = Contact("garb", 100045);

	assert(c1.getEmergencyContact() == NULL && c2.getEmergencyContact() == NULL);
	c1.setEmergencyContact(c2);
	assert(c1.getEmergencyContact() == &c2);

	std::cout << "setEmergencyContact(...) passed" << std::endl;
}


void testGetNumberByName(){
	Contact c1 = Contact("blaah",1000802);
	Contact c2 = Contact("garb", 100045);
	Contact* contacts = new Contact[2];
	contacts[0] = c1; contacts[1] = c2;
	PhoneBook pb = PhoneBook(contacts,2);
	assert( pb.getNumberByName("blaah") == 1000802);
	assert( pb.getNumberByName("garb") == 100045);
	std::cout << "getNumberByName(...) passed" << std::endl;
}

void testGetNameByNumber(){
	Contact c1 = Contact("blaah",1000802);
	Contact c2 = Contact("garb", 100045);
	Contact* contacts = new Contact[2];
	contacts[0] = c1; contacts[1] = c2;
	PhoneBook pb = PhoneBook(contacts,2);
	assert( pb.getNameByNumber(1000802).compare("blaah") == 0 );
	assert( pb.getNameByNumber(100045).compare("garb") == 0 );
	std::cout << "getNameByNumber(...) passed" << std::endl;
}

void testGenerateRandomContact(){
	Contact c = generateRandomContact();
	assert(c.getName().size() > 0);
	assert(c.getPhoneNumber() >= 0);
	std::cout << "generateRandomContact(...) passed" << std::endl;
}

void testVerifyAllContacts(){
	Contact c1 = Contact("blaah",1000802);
	Contact c2 = Contact("garb", 100045);
	Contact c3 = Contact("blaah1",1000800);
	Contact c4 = Contact("garb1", 1000450);
	c2.setEmergencyContact(c1);
	c1.setEmergencyContact(c4);
	Contact contacts [4] = {c1,c2,c3,c4};
	PhoneBook pb = PhoneBook(contacts,4);

	assert( pb.getNumberByName("garb") == 100045);
	assert( pb.getNumberByName("garb1") == 1000450);
	pb.verifyAllContacts();
	assert (pb.getNumberByName("garb") == -1); // should have been removed
	assert( pb.getNumberByName("garb1") == 1000450);

	std::cout << "verifyAllContacts(...) passed" << std::endl;
}




// --------------  main  ---------------------------------------//
// UNCOMMENT the code below when you fill in enough functions for them to compile
int main(){
	srand(time(NULL)); // set seed for random function

	Contact c1 = Contact("blaah",1000802);
	Contact c2 = Contact("garb", 100045);
	std::cout << std::endl;

	// // Contact tests
	// testChangeNumber();
	// testChangeName();
	// testSetEmergencyContact();
	// // PhoneBook tests
	// testGetNumberByName();
	// testGetNameByNumber();
	// testGenerateRandomContact();
	// testVerifyAllContacts();


	std::cout << "\n" << std::endl;

	int _numContacts = myrand(200); // generate up to 200 contacts for phonebook
	// PhoneBook pb (generateRandomContacts(_numContacts),_numContacts);
	// pb.printAllContacts();
	// pb.verifyAllContacts();
	// pb.printAllContacts();


}

