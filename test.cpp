#include "iostream"
using namespace std;

bool whatsapp()
{
  cout << "Que pasaaaa" << endl << "amigo";
  return false;
}

int numbers()
{
  int i;
  int j;

  cout << "Enter a number" << endl;
  cin >> i;
  cout << "You entered " << i << ". Enter another number." << endl;
  cin >> j;

  if (i < j)
  {
    cout << "The first number, " << i << ", is greater than the second:" << j;
  }
  else 
  {
    cout << "The second number, " << j << ", is greater than the first: " << i;
  }
  return 0;
}

int main()
{
  cout << "Hello world!" << endl;
  auto j = 2; // auto is from c++11
  cout << j << endl;
  whatsapp();
  numbers();
  cin >> j;
  return 0;
}

