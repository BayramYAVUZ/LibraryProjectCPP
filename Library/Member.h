#ifndef MEMBER_H
#define MEMBER_H

#include "LibraryUser.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

//Carries out the borrowing and returning of books by members
class Member : public LibraryUser{ // Derived from LibraryUser

private:
    vector<LibraryBook*> borrowedBooks;

public:
    Member(string name, int id) : LibraryUser(name, id) {}; //Constructor of Member

    void borrowBook(LibraryBook& book) { //// Borrowing books
        if (book.getAvailability()) {
            borrowedBooks.push_back(&book); // // Borrowing books
            book.setAvailability(false);  // Book is no longer available
            cout << book.getTitle() << " Has been borrowed " << endl;
        }
        else {
            cout << book.getTitle() << " Currently not available " << endl;
        }
    }
    void returnBook(LibraryBook& book) {
        for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it) { // We are looking for a book to borrow
            if ((*it)->getTitle() == book.getTitle()) {
                borrowedBooks.erase(it);  // Book out of vector
                book.setAvailability(true);  // Book available
                cout << book.getTitle() << " has been returned." << endl;
                return;
            }
        }
        cout << "This book was not borrowed by you." << endl;
    }

    void displayInfo() override {  // Show user information
        cout << "Member Name: " << name << endl;
        cout << "Member ID: " << id << endl;
        cout << "Borrowed Books: " << borrowedBooks.size() << endl;

        if (!borrowedBooks.empty()) { // If there are any borrowed books, list them
            cout << "List of Borrowed Books: " << endl;
            for (auto& book : borrowedBooks) {
                cout << book->getTitle() << endl;
            }
        }
    }
   
    // Display user ID
    void displayUserID() {
        std::cout << "User ID: " << id << std::endl;  // Prints the ID of the member
    }
};

// OKEY TAMAMLADIM 
#endif
