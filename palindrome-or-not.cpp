#include <iostream>
using namespace std;
int main()
{
	int num, rev=0, rem, i;
	cout<<"Enter the number: ";
	cin>>num;
	for(i=num;i>0;i=i/10)
	{
		rem=i%10;
		rev=rev*10+rem;
	}
	if (rev==num)
	cout<<"Number is palindrome";
	else
	cout<<"Number is not palindrome";
}
