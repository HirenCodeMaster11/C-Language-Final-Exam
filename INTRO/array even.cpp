#include<iostream>
using namespace std;

//Q.1 Write a Program to find all even elements from a given 1D array.

main()
{
	int a[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		cout << "Enter the a["<<i<<"] : ";
		cin >> a[i];
	}
	
	cout << endl;
	cout << "Even num is : ";
	
	for(i=0; i<5; i++)
	{
		if(a[i]%2 == 0)
		{
			cout << a[i] << " " ;	
		}
	}
}