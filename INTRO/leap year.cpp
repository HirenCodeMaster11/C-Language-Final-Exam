#include<iostream>
using namespace std;

//Q.2 Write a Program to find leap years between two given numbers and store them in an 
//array. And then print that array.

main()
{
	int a,b;
	int i;
	int leap;
	
	cout << "Enter the First year : ";
	cin >> a;
	cout << "Enter the Last year : ";
	cin >> b;
	
	cout << endl;
	
	leap = (b-a) / 4 + 1;
	
	cout << "Leap Year is : ";
	
	for(i=0; i<leap; i++)
	{
		if(a%4 == 0)
		{
			cout << a << " " ;
			a+=4;	
		}
	}
}