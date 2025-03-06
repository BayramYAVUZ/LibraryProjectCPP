#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "LibraryUser.h"
#include "LibraryBook.h"
#include "LibrarySystem.h"
#include <iostream>
#include <string>
using namespace std;

class Librarian : public LibraryUser { // Adding and eleting the books 

public:
	Librarian(string name, int id) : LibraryUser(name, id) {}; //Constructor of Librariian

	void addBook(LibrarySystem& system, LibraryBook& book) {
		system.addBook(&book); // Adds new book for the System
	}

	void removeBook(LibrarySystem& system, string ISBN) {
		system.removeBook(ISBN); // Delete the book with ISBN number
	}

	void displayInfo() override { // Method From Abstract Class
		cout << "Librarian Name :" << name << "And ID :" << id << endl;
	}
};


#endif
