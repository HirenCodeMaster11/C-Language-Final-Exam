#include<iostream>
using namespace std;

//Q.3 Write a program to read and print distance for feet and inches.

main()
{
	int feet,inche;
	int i;
	
	cout << "Enter the Feet : ";
	cin >> feet;
	cout << "Enter the Inche : ";
	cin >> inche;
	
	cout << endl;
	
	for(i=1; i<=inche; i++)
	{
		if(inche>=12)
		{
			inche-=12;
			feet++;	
		}
	}
	
	cout << "Feet is : " << feet << endl;
	cout << "Inche is : " << inche;
}
