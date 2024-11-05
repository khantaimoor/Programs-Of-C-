// Library System:Create a class Book with attributes like title, author, and ISBN.
//  Implement a method to display book details. 
// Then, create a class Library that can store multiple Book objects and 
// has methods to add a book and list all books.

#include<iostream>
#include <vector>
using namespace std;
class Book {
    public:
    string title;
    string author;
    int isbn;
    void displayBook () {
        cout << "Title of Book is " <<title <<endl;

        cout << "Author of Book is" <<author <<endl;

        cout << "ISBN of Book is " <<isbn <<endl;

    }
    
};
class Library {
    public:

    vector <Book> books;

    void addBook(const Book& book) {
        books.push_back(book);

    }
    void listsBook () {
        for (int i = 0; i < books.size(); i++ ) {
            books[i].displayBook();
            cout << endl;

        }
    }

};
int main() {
    Library lib;
    Book book1;
    book1.title = "C++ Programming";
    book1.author = "John Smith";
    book1.isbn = 132323;

    lib.addBook(book1);

    Book book2;
    book2.title = "DSA";
    book2.author = "Sherry";
    book2.isbn = 3234242;

    lib.addBook(book2);
    lib.listsBook();
    return 0;

}

