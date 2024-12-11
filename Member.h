#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <vector>
#include "Book.h"

class Member {
private:
    int memberID;
    std::string name;
    std::vector<Book*> borrowedBooks;

public:
    Member(int id, const std::string& n);
    void borrowBook(Book& book);
    void returnBook(Book& book);
    void displayMemberDetails() const;
    int getMemberID() const;
};

#endif
