# 220Lab1
What I want you to learn:
* Become introduced to code in C++
* Become familiar with pointers
* How to write a makefile
* How to navigate in command line

## Setup:
ssh into cisc220.cis.udel.edu, and copy the lab 1 starter code directory to the class
machine. See the document in Sakai Resources about connecting to the class machine.
The compiler on the class machine we are using is g++ 4.9. You do not need to write the
code through ssh, you can use whatever text editor or IDE that you wish; we
recommend CodeAnywhere because it is easily configured with ssh access. The only
requirement here is that your code must run on the class machine; this is where we will
be testing all of the code projects in this class. To transfer files, you can use the
command-line program scp or through the CodeAnywhere interface.

## Problem:
The class Contact is made up of a name (as a string), a phone number (as an int), and an
emergency contact (pointer to another Contact). The class PhoneBook is made up of a
pointer to an array of Contacts and the number of Contacts.

The skeleton code given has many functions filled out but some that are left for you. The
ones left for you have //CODE HERE in them, as well as a description of what the
function is to do. Do NOT edit the header (.h) files! These are the interfaces that I have

made, and your code should match them or our tests will not compile, which is bad for
your grade. There is also no need to edit the makefile, although you need to write a
summary of what the makefile does in your README. Some code is commented in the
main function, which you should uncomment when you have enough code filled in for it
to compile.

The list of functions to fill in (in a recommended order):
* Contact::changeNumber
* Contact::changeName
* Contact::setEmergencyContact
* PhoneBook::getNumberByName
* PhoneBook::getNameByNumber
* generateRandomContact [in main.cpp]
* PhoneBook::verifyAllContacts

The result (after uncommenting the main function) should be a list of randomly
generated contacts followed by the same list with invalid Contacts removed, including
any emergency contacts. More specifically, if a Contact is not removed then its
emergency contact could still be removed because its phone number is invalid.
