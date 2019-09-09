#include <stdio.h>
#include <iostream>

extern "C" double sum(double,double);
extern "C" double product(double,double);


using namespace std;


double sum(double a, double b)
{
	double sum;
	sum = a+b;
	return sum;
}

double product(double a, double b)
{
  double product;
  product = a*b;
  return product;
}

int main()
{
/*
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
*/


  double a, b, prod, add;
  cout << "Welcome to the arithmetic program by Ivan Tu" << endl;
  cout << "Please enter 2 float numbers to compute the sum." << endl;
  cout << "First number: ";
  cin >> a;
  cout << "Second number: ";
  cin >> b;
  cout << "You entered numbers: " << a << " " << b << endl;
  add = sum(a,b);
  cout << "The sum of the 2 numbers: " << add << endl;
  prod = product(a,b);
  cout << "The product of the 2 numbers: " << prod << endl;
  return 0;

/*
	printf(“%s, welcome to the demonstration"); 	//%s refers to string
	double a, b , c, dis;
	printf(“%s”, “Please enter 3 float numbers separated by ws”);
	scanf(“%lf %lf %lf”, &a, &b, &c); 	//%lf refers to looking for. “cin”
	dis = discriminant(a,b,c);
  printf(“You entered %4.3lf and %4.3lf and %4.3lf”, a,b,c);
	printf(“Discriminant is %6.5lf\n”, dis);
	return 0;
*/

}
