#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "LibraryBook.h"
#include "LibraryUser.h"
#include "LibrarySystem.h"
#include "Member.h"
#include "Librarian.h"
#include "AccCtrl.h"

int main() {
   
    LibrarySystem library;

    Member* member = new Member("John Doe", 101);   // Make New Member
    Librarian* librarian = new Librarian("Sarah Smith", 102); // Make New Librarian

    library.addUser(member); // Add the library
    library.addUser(librarian); //Add the library

    LibraryBook* book1 = new LibraryBook("1984", "George Orwell", "9780451524935", true); //Add the book
    LibraryBook* book2 = new LibraryBook("To Kill a Mockingbird", "Harper Lee", "9780060935467", true); //Add the book

    librarian->addBook(library, book1); // Adding the book thanks to librarian
    librarian->addBook(library, book2); // Adding the book thanks to librarian


    std::cout << "Total number of books : " << LibraryBook::getNumberOfBooks() << std::endl; // Total number of books


    member->borrowBook(*book1);  // Borrow the book
    std::cout << "Dear, " << member->getUserID() << ", '" << book1->getTitle() << "-> Borrow the book" << std::endl;

    member->returnBook(*book1);  // Return the book
    std::cout << "Dear, " << member->getUserID() << ", '" << book1->getTitle() << "-> Retrun the book" << std::endl;


    library.displayAllBooks();    // Print all the book
    library.displayUsersInfo();   // Print all the book


    delete member;     // Delete the object
    delete librarian;  // Delete the object
  
    delete book1;      // Delete book1
    delete book2;      // Delete book2
}
