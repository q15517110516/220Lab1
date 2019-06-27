#ifndef Contact_H   // header files should always have this to avoid 
#define Contact_H 	// multiple inclusion in other files 

#include <string>

// this is the only programming assignment which will use this statement.
// normally "using namespace std" is looked down upon because it 
// introduces many common keywords that could be accidentally used, but 
// it identifies useful types such as string and would normally be used
// std::string or std::vector.
using namespace std;

class Contact {
public:
	Contact(string _name = "", int _phoneNumber = 0);
	Contact(string _name, int _phoneNumber, 
		Contact & _emergencyContact);

	// accessors for Contact 
	string getName() const;  
	int getPhoneNumber() const;   
	bool verifyPhoneNumber() const; 
	Contact* getEmergencyContact() const;

	// mutators for Contact 
	void changeNumber(const int newNumber);
	void changeNumber(const Contact * newContact);
	void changeName(const string newName);
	void changeName(const Contact * newContact);
	void setEmergencyContact(Contact & _emergencyContact);

private:
	string name;
	int phoneNumber;
	Contact * emergencyContact;
};


#endif