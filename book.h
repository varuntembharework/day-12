#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

// Data structure for Book
struct Book {
    int id;
    string title;
    string author;
    int quantity;
};

// Function declarations
void addBook();
void viewBooks();
void searchBook();
void deleteBook();

#endif