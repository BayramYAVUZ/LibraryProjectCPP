#include <iostream>
#include <string>
#include <vector>
#include "LibraryBook.h"
#include "LibraryUser.h"

using namespace std;

class LibrarySystem  // Performs operations on BOOK and USERS
{
private:
    vector<LibraryBook*> books;
    vector<LibraryUser*> users;
    int userID;

public:
    void addUser(LibraryUser* user) { // Add the users
        users.push_back(user);
    }

    void removeUser(int usersID) {
        for (int i = 0; i < users.size(); i++) {
            if (users[i]->getUserID() == userID) {
                users.erase(users.begin() + i);  // Delete User
                return;
            }
        }
        cout << " User not found! :( " << endl;  // User not found message
    }

    void displayAllBooks() {
        for (int b = 0; b < books.size(); b++) {
            LibraryBook* book = books[b];  // Get books from books -> vector
            book->displayInfo();  // Print book information
        }
        cout << "Number of all books : " << LibraryBook::getNumberOfBooks() << endl;  // Corrected to getTotalBooks()
    }

    void displayUsersInfo() {
        for (int u = 0; u < users.size(); u++) {
            LibraryUser* user = users[u];  // Corrected variable name from 'users' to 'user'
            user->displayInfo();  // Print user information
        }
    }

    void addBook(LibraryBook* book) {  // Corrected method to accept a LibraryBook pointer
        books.push_back(book);
    }

    void removeBook(string ISBN) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i]->getISBN() == ISBN) {
                books.erase(books.begin() + i);  // Delete Book
                return;
            }
        }
        cout << "Book not found! :( " << endl;  // Not Found the book
    }
};

