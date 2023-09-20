#include <iostream>

int main()
{
  int integer1 = 0;
  int integer2 = 0;
  int sum = 0;

  std::cout << "Press first any key number:" << std::endl;
  std::cin >> integer1;
  std::cout << "Press second any key number:" << std::endl;
  std::cin >> integer2;

  sum = integer1 + integer2;
  std::cout << "resultado: " << sum << std::endl;

  return 0;
}