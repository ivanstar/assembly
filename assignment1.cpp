#include <stdio.h>
#include <iostream>
//extern “C” double discriminant(double,double,double);

using namespace std;

int main()
{
  double a, b;
  cout << "Welcome to the arithmetic program by Ivan Tu" << endl;
  cout << "Please enter 2 float numbers to compute the sum." << endl;
  cout << "First number: ";
  cin >> a;
  cout << "Second number: ";
  cin >> b;
  cout << "You entered numbers: " << a << " " << b << endl;
  cout << "The sum of the 2 numbers: " << a+b << endl;
  cout << "The product of the 2 numbers: " << a*b << endl;
  return 0;

}
