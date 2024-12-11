#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    int bookID;
    std::string title;
    std::string author;
    bool isAvailable;

public:
    Book(int id, const std::string& t, const std::string& a);
    void displayBookDetails() const;
    void setAvailability(bool available);
    bool getAvailability() const;
    int getBookID() const;
    std::string getTitle() const;
};

#endif
