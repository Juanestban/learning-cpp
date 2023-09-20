#include <iostream>
#include <string>

using namespace std;

int main() {
  const string str1 = "Hello";
  const string str2 = "World";
  string str3;

  str3 = str1;
  cout << "str3: " << str3 << endl;

  str3 = str1 + str2;
  cout << "str1 + str2: " << str3 << endl;

  const int len = str3.size();
  cout << "str3.size(): " << len << endl;

  return 0;
}