#include "iostream"
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

bool whatsapp()
{
  cout << "Que pasaaaa" << endl
       << "amigo";
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

long testLoop()
{
  long long number = 0;

  for (long long i = 0; i < 1000000000; ++i)
  {
    number += 1;
  }
  return number;
}

int main()
{
  // cout << "Hello world!" << endl;
  // auto j = 2; // auto is from c++11
  // cout << j << endl;
  // whatsapp();
  // numbers();
  // cin >> j;
  // return 0;

  high_resolution_clock::time_point t1 = high_resolution_clock::now();
  auto a = testLoop();
  high_resolution_clock::time_point t2 = high_resolution_clock::now();

  auto duration = duration_cast<milliseconds>(t2 - t1).count();
  cout << duration << "ms for " << a << " iterations";
  return 0;
}
