#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <iostream>
#include <string>
#include "AccCtrl.h"

using namespace std;


class LibraryBook //  We will create a class to manage books.
{
public:
	string title, author, ISBN;
	// Title of Books 
	// Author of Books
	// ISBN is the special number of the book.
	bool isAvailable;

	static int numberOfBooks;

public:
	// Constructor for LibararyBook
	LibraryBook(string title, string author, string ISBN, bool isAvailable) {
		this->title = title;
		this->author = author;
		this->ISBN = ISBN;
		this->isAvailable = isAvailable;

		numberOfBooks++;
	}
	// Destructor for LibraryBook
	~LibraryBook() {
		numberOfBooks--;
	}

	// Get And Set Method For Title ********************
	string getTitle() const {
		return title;
	}
	void setTitle(const string& title) {
		this->title = title;
	}

	// Get And Set Method For Author *****************
	string getAuthor() const {
		return author;
	}
	void setAuthor(const string author) {
		this->author = author;
	}

	// Get And Set Method For ISBN ******************
	string getISBN() const {
		return ISBN;
	}
	void setISBN(const string ISBN) {
		this->ISBN = ISBN;
	}
	// Get And Set Method For Availability ***************
	bool getAvailability() const {
		return isAvailable;
	}
	void setAvailability(bool isAvailable) {
		this->isAvailable = isAvailable;
	}

	static int getNumberOfBooks() { //For number of books in library
		return numberOfBooks;
	}
	
void displayInfo(string title, string author, string ISBN, bool isAvailable) { // Details of book
	cout << "Title --> " << title << endl;
	cout << "Author --> " << author << endl;
	cout << "Books Number -->" << ISBN << endl;
	cout << "State Of BOOK -->" << (isAvailable ? "Available" : "Not Available") << endl;
	}
};

	int LibraryBook::numberOfBooks = 0;	//// Start of static value
	
	// OKEY TAMAMLADIM

	
#endif



