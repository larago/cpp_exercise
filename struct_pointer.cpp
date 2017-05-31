#include <iostream>
#include <cstring>

using namespace std;
void printBook( struct Books *book );

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {

    Books Book1;
    Books Book2;

    strcpy( Book1.title, "cpp book1");
    strcpy( Book1.author, "Cat");
    strcpy( Book1.subject, "Cook meal");
    Book1.book_id = 1;

    strcpy( Book2.title, "cpp book2");
    strcpy( Book2.author, "Dog");
    strcpy( Book2.subject, "Cook lunch");
    Book2.book_id == 2;

    printBook( &Book1 );
    printBook( &Book2 );

    return 0;
}

void printBook( struct Books *book ) {
    cout << "Book's title: " << book->title << endl;
    cout << "Book's author: " << book->author << endl;
    cout << "Book's subject: " << book->subject << endl;
    cout << "Book's id: " << book->book_id << endl;
}