#ifndef LIBRARYUSER_H
#define LIBRARYUSER_H
#include <iostream>
#include <string>
#include <vector>
#include "LibraryBook.h"

class LibraryUser {
	/* 
	     Defines common properties and methods of users.
	                 Abstract Class
	 */
public:
	std::string name; // User Name
	int id;           // User Number

public:
	LibraryUser(std::string name, int id) : name(name), id(id) {}
	virtual ~LibraryUser() {}
	void getUserID() {};

	virtual void displayInfo() = 0; // Abstract Methodu
};
// OKEY TAMAMLADIM
#endif