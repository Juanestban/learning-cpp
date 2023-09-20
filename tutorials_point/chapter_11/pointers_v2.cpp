#include <iostream>
using namespace std;

int main() {
  int var1 = 20;
  int *ip;

  ip = &var1;

  cout << "Value of var1 variable: ";
  cout << var1 << endl;

  cout << "Address stored in ip variable> ";
  cout << ip << endl;

  cout << "Value of *ip variable pointers: ";
  cout << *ip << endl;

  return 0;
}