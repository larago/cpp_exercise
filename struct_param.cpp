#include <iostream>
#include <cstring>

using namespace std;
void printBook( struct Books book );

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    Books Book1;
    Books Book2;

    strcpy(Book1.title, "CPP cookbook");
    strcpy(Book1.author, "Hello Kiity");
    strcpy(Book1.subject, "Math");
    Book1.book_id = 1;

    strcpy(Book2.title, "CPP Lunch");
    strcpy(Book2.author, "Jane");
    strcpy(Book2.subject, "Programming");
    Book2.book_id = 2;

    printBook(Book1);

    printBook(Book2);

    return 0;
}

void printBook(struct Books book) {
    cout << "Book's title: " << book.title << endl;
    cout << "Book's author: " << book.author << endl;
    cout << "Book's subject: " << book.subject << endl;
    cout << "Book's book_id: " << book.book_id << endl;
}