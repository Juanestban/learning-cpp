#include <iostream>
using namespace std;

int main() {
  int condition = 0;
  string other = (condition > 0) ? "mayor a 0" : "menor o igual a 0";

  cout << "result: " << other;

  return 0;
}