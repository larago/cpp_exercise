#include <iostream>
#include <cstring>

using namespace std;

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    Books Book1;
    Books Book2;

    strcpy(Book1.title, "C++ Guidance");
    strcpy(Book1.author, "Kyler");
    strcpy(Book1.subject, "C++ Language");
    Book1.book_id = 12345;

    strcpy(Book2.title, "CSS Guidance");
    strcpy(Book2.author, "Kyloo");
    strcpy(Book2.subject, "Frontend");
    Book2.book_id = 23451;

    cout << "The first book's title: " << Book1.title << endl;
    cout << "The first book's author: " << Book1.author << endl;
    cout << "The first book's subejct: " << Book1.subject << endl;
    cout << "The first book's id: " << Book1.book_id << endl;

    cout << "The second book's title: " << Book2.title << endl;
    cout << "The second book's author: " << Book2.author << endl;
    cout << "The second book's subject: " << Book2.subject << endl;
    cout << "The second book's id: " << Book2.book_id << endl;

    return 0;
}