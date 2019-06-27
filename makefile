OBJS = Contact.o PhoneBook.o
CC = g++-4.9
DEBUG = -g
C11 = -std=c++11
LFLAGS = -Wall $(DEBUG)
CFLAGS = $(LFLAGS) -c


PhoneBook: $(OBJS) main.cpp
	$(CC) $(LFLAGS) main.cpp $(OBJS) -o PhoneBook

Contact.o: Contact.cpp Contact.h
	$(CC) $(CFLAGS) Contact.cpp

PhoneBook.o: PhoneBook.cpp PhoneBook.h Contact.h
	$(CC) $(CFLAGS) PhoneBook.cpp

clean:
	rm -r *.o PhoneBook *.dSYM
