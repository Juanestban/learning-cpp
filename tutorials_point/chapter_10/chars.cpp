#include <cstring>
#include <iostream>

using namespace std;

int main() {
  const char str1[10] = "Hello";
  const char str2[10] = "World";
  char str3[10];

  strcpy(str3, str1);
  cout << "strcpy(str3, str1): " << str3 << endl;

  strcat(str3, str2);
  cout << "strcat(str3, str2): " << str3 << endl;

  const int len = strlen(str1);
  cout << "strlen(str1): " << len << endl;

  return 0;
}