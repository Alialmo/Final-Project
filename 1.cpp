#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    double price;
    int numberOfPages;
};

void p(struct Book b) {
    cout << "Book -----------" << "\n";
    cout << "Title: " << b.title << "\n";
    cout << "Author: " << b.author << "\n";
    cout << "Price: " << b.price << "\n";
    cout << "Number of Pages: " << b.numberOfPages << "\n";
}

int main() {
    struct Book book1;
    struct Book book2;

    book1.title = "Ahmad Harunsh";
    book1.price = 9.99;
    book1.numberOfPages = 420;
    book1.author = "Network 1";

    book2.title = "Ahmde Masri";
    book2.price = 22.49;
    book2.numberOfPages = 310;
    book2.author = "Network 2";

    p(book1);
    p(book2);

    return 0;
}