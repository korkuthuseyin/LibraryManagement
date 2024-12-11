#include <iostream>
#include "Library.h"
#include "Book.h"
#include "Member.h"

int main() {
    Library library;
    
    // Adding books and members
    library.addBook(Book(1, "1984", "George Orwell"));
    library.addBook(Book(2, "The Catcher in the Rye", "J.D. Salinger"));
    library.addMember(Member(1, "Alice"));
    library.addMember(Member(2, "Bob"));
    
    // Displaying all books and members
    library.displayBooks();
    library.displayMembers();
    
    // Example of borrowing and returning books
    library.borrowBook(1, 1); // Alice borrows "1984"
    library.returnBook(1, 1); // Alice returns "1984"
    
    return 0;
}
