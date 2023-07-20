#include <iostream>
using namespace std;
int main()
{
	int num,i;
	float fact=1;
	cout<<"Enter an integer number: ";
	cin>>num;
	for(i=1;i<=num;i++)
	fact=fact*i;
	cout<<"Factorial of a given number = "<<fact;
	return 0;
}
