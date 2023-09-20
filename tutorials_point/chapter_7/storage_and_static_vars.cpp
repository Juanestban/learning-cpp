#include <iostream>
using namespace std;

// Function declaration
void func(void);

static int _count = 10; /* Global variable */

main()
{
  while (_count--)
  {
    func();
  }

  return 0;
}

// Function definition
void func(void)
{
  static int i = 5; // local static variable => esto mantiene el valor asignado y reasignado durante la ejecución del programa
  i++;
  cout << "i is " << i;
  cout << " and _count is " << _count << endl;
}