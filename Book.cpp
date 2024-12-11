#include "Book.h"
#include <iostream>

Book::Book(int id, const std::string& t, const std::string& a) 
    : bookID(id), title(t), author(a), isAvailable(true) {}

void Book::displayBookDetails() const {
    std::cout << "Book ID: " << bookID << "\nTitle: " << title << "\nAuthor: " << author << "\n";
    std::cout << "Availability: " << (isAvailable ? "Available" : "Not Available") << std::endl;
}

void Book::setAvailability(bool available) {
    isAvailable = available;
}

bool Book::getAvailability() const {
    return isAvailable;
}

int Book::getBookID() const {
    return bookID;
}

std::string Book::getTitle() const {
    return title;
}
