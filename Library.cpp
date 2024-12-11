#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::addMember(const Member& member) {
    members.push_back(member);
}

void Library::borrowBook(int memberID, int bookID) {
    // Find member by ID and book by ID, then borrow the book
}

void Library::returnBook(int memberID, int bookID) {
    // Find member and book, then return the book
}

void Library::displayBooks() const {
    for (const auto& book : books) {
        book.displayBookDetails();
    }
}

void Library::displayMembers() const {
    for (const auto& member : members) {
        member.displayMemberDetails();
    }
}
