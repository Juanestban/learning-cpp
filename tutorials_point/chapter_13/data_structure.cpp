#include <cstring>
#include <iostream>
using namespace std;

struct Book {
  int id;
  char title[50];
  char author[50];
  char subject[50];
};

int main() {
  struct Book book1;
  struct Book book2;

  strcpy(book1.title, "Learn C++ Programming");
  strcpy(book1.author, "Chand Miyan");
  strcpy(book1.subject, "C++ Programming");
  book1.id = 6495407;

  strcpy(book2.title, "Telecom Billing");
  strcpy(book2.author, "Takit Singha");
  strcpy(book2.subject, "Telecom");
  book2.id = 6495700;

  cout << "Book 1 id: " << book1.id << endl;
  cout << "Book 1 title: " << book1.title << endl;
  cout << "Book 1 author: " << book1.author << endl;
  cout << "Book 1 subject: " << book1.subject << endl;

  cout << "---------------------------------------------" << endl;

  cout << "Book 2 id: " << book2.id << endl;
  cout << "Book 2 title: " << book2.title << endl;
  cout << "Book 2 author: " << book2.author << endl;
  cout << "Book 2 subject: " << book2.subject << endl;

  return 0;
}