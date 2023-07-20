#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter the number of elements: ";
	int size, sum=0;
	cin>>size;
	int array[size];
	cout<<"Enter the number of element: ";
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
		sum=sum+array[i];
	}
	cout<<"Sum of array = "<<sum;
}
	

	
