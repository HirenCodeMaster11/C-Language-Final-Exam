//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
//- a person cannot be able to vote if his/her age is less than 18
//- a password cannot be validated if it doesn’t contains an uppercase letter

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout << "Enter the value of a : ";
	cin >> a;
	cout << "Enter the value of b : ";
	cin >> b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout << "a/b = " << a/b;
		}
	}
	catch(int b)
	{
		cout << b << " " << "Value is not divide by zero";
	}
	return 0;
}