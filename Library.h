#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Member.h"
#include "Transaction.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<Member> members;
    std::vector<Transaction> transactions;

public:
    void addBook(const Book& book);
    void addMember(const Member& member);
    void borrowBook(int memberID, int bookID);
    void returnBook(int memberID, int bookID);
    void displayBooks() const;
    void displayMembers() const;
};

#endif
