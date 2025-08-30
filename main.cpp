#include <iostream>
#include "book.h"
using namespace std;

void bookMenu() {
    int choice;
    do {
        cout << "\n========== Book Management ==========\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "0. Exit\n";
        cout << "=====================================\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "invalid choice!\n";
        }
    } while (choice != 0);
}

int main() {
    bookMenu();
    return 0;
}