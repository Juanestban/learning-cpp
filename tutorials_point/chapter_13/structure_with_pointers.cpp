#include <cstring>
#include <iostream>
using namespace std;

void printBook(struct Book *book);

struct Book {
  int id;
  char title[50];
  char author[50];
  char subject[100];
};
int main() {
  struct Book book1;  // Declare Book1 of type Book
  struct Book book2;  // Declare Book2 of type Book

  strcpy(book1.title, "Learn C++ Programming");
  strcpy(book1.author, "Chand Miyan");
  strcpy(book1.subject, "C++ Programming");
  book1.id = 6495407;

  strcpy(book2.title, "Telecom Billing");
  strcpy(book2.author, "Yakit Singha");
  strcpy(book2.subject, "Telecom");
  book2.id = 6495700;

  printBook(&book1);

  printBook(&book2);

  return 0;
}

// This function accept pointer to structure as parameter.
void printBook(struct Book *book) {
  cout << "Book title : " << book->title << endl;
  cout << "Book author : " << book->author << endl;
  cout << "Book subject : " << book->subject << endl;
  cout << "Book id : " << book->id << endl;
}