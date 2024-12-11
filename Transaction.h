#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include "Book.h"
#include "Member.h"
#include <iostream>

class Transaction {
private:
    int transactionID;
    Book* book;
    Member* member;
    std::string type;  // "borrow" or "return"
    std::string date;  // Date of the transaction (e.g., "2024-12-11")

public:
    // Constructor to initialize the transaction
    Transaction(int id, Book* b, Member* m, const std::string& t, const std::string& d);

    // Methods to display transaction details
    void displayTransactionDetails() const;

    // Getter methods
    int getTransactionID() const;
    Book* getBook() const;
    Member* getMember() const;
    std::string getType() const;
    std::string getDate() const;
};

#endif
