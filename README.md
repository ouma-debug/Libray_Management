The provided C code represents a simple console-based library management system. Here's a brief description of the project:

**Project Overview:**
- **Functionality:**
  - Users can interact with the program to perform various operations related to managing a library.
  - Operations include adding book information, displaying book information, searching for books by author, searching for books by genre, and getting the number of books in the library.
- **Data Structure:**
  - The primary data structure used is an array of structures (`struct library`) to store information about books.
- **User Interface:**
  - The program presents a menu to the user with numbered options to choose from.
  - The user can input their choice, and the program responds accordingly.
- **Limitations:**
  - The library is assumed to have a maximum capacity of 100 books (`lib[100]`).
  - String input is limited to 20 characters in length for attributes like book name, author, and genre.
- **Operations:**
  - **Add Book:**
    - Users can add information about a book, including its name, author, pages, price, and genre. The library's book count is incremented after each addition.
  - **Display Books:**
    - Users can view information about all books currently stored in the library.
  - **Search by Author:**
    - Users can search for books by entering an author's name. The program displays information about books by the specified author.
  - **Search by Genre:**
    - Users can search for books by entering a genre. The program displays information about books in the specified genre.
  - **Number of Books:**
    - Users can check the total number of books currently stored in the library.

