#include "Member.h"
#include <iostream>

Member::Member(int id, const std::string& n) : memberID(id), name(n) {}

void Member::borrowBook(Book& book) {
    if (book.getAvailability()) {
        borrowedBooks.push_back(&book);
        book.setAvailability(false);
        std::cout << "Book borrowed successfully.\n";
    } else {
        std::cout << "Book is not available for borrowing.\n";
    }
}

void Member::returnBook(Book& book) {
    for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it) {
        if (*it == &book) {
            borrowedBooks.erase(it);
            book.setAvailability(true);
            std::cout << "Book returned successfully.\n";
            return;
        }
    }
    std::cout << "This book was not borrowed by you.\n";
}

void Member::displayMemberDetails() const {
    std::cout << "Member ID: " << memberID << "\nName: " << name << "\n";
}

int Member::getMemberID() const {
    return memberID;
}
