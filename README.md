# Library Management System

## Overview
This project is a simple **Library Management System (LMS)** implemented in **C++**. The system allows for managing books, library members, and transactions (borrow/return). It demonstrates the use of object-oriented programming (OOP) principles such as classes, inheritance, file handling, and transaction tracking.

## Features
- Add and display books
- Add and display library members
- Borrow and return books
- Track borrow and return transactions
- Display transaction details (borrow/return)
  
## Project Structure
```bash
LibraryManagementSystem/
│
├── Book.h             # Header file for the Book class
├── Book.cpp           # Implementation file for the Book class
├── Member.h           # Header file for the Member class
├── Member.cpp         # Implementation file for the Member class
├── Transaction.h      # Header file for the Transaction class
├── Transaction.cpp    # Implementation file for the Transaction class
├── Library.h          # Header file for the Library class
├── Library.cpp        # Implementation file for the Library class
├── Main.cpp           # Main program file
```

## How It Works

1. **Library**: The core class that manages books, members, and transactions.
   - **Books** are represented by the `Book` class and contain details like title, author, and availability.
   - **Members** are represented by the `Member` class, which includes member details and a list of borrowed books.
   - **Transactions** are created using the `Transaction` class, which logs borrow and return actions, along with the date and member information.

2. **Operations**:
   - Members can **borrow** and **return** books.
   - Each borrow/return action creates a new **Transaction** entry.
   - The system keeps track of each book's availability, ensuring that books cannot be borrowed if they are already checked out.

## Prerequisites

Before running this project, ensure you have the following installed:

- A C++ compiler (e.g., **g++** on Linux/macOS or **MinGW** on Windows).
- A text editor or IDE (e.g., **Visual Studio Code**, **CLion**, **Code::Blocks**).

## How to Compile and Run

### On Linux/macOS

1. Open a terminal and navigate to the project folder:

   ```bash
   cd path/to/LibraryManagementSystem
2. Compile the program
   ```bash
   g++ -o LibraryManagementSystem Book.cpp Member.cpp Transaction.cpp Library.cpp Main.cpp

3. Run the executable
   ```bash
   ./LibraryManagementSystem


### Clone this repository
    ```bash
    git clone https://github.com/korkuthuseyin/LibraryManagement.git
