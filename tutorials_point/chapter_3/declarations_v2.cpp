#include <iostream>
using namespace std;

// declaration function
int func();
int main() {
  int result = func();
  cout << "final_result: " << result << endl;

  return 0;
}

int func() { return 0; }