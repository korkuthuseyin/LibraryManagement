#include "Transaction.h"

Transaction::Transaction(int id, Book* b, Member* m, const std::string& t, const std::string& d)
    : transactionID(id), book(b), member(m), type(t), date(d) {}

void Transaction::displayTransactionDetails() const {
    std::cout << "Transaction ID: " << transactionID << std::endl;
    std::cout << "Book Title: " << book->getTitle() << std::endl;
    std::cout << "Member: " << member->getMemberID() << " (" << member->getMemberID() << ")" << std::endl;
    std::cout << "Transaction Type: " << type << std::endl;
    std::cout << "Date: " << date << std::endl;
}

int Transaction::getTransactionID() const {
    return transactionID;
}

Book* Transaction::getBook() const {
    return book;
}

Member* Transaction::getMember() const {
    return member;
}

std::string Transaction::getType() const {
    return type;
}

std::string Transaction::getDate() const {
    return date;
}
