//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
//- a person cannot be able to vote if his/her age is less than 18
//- a password cannot be validated if it doesn’t contains an uppercase letter

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char pass[32];
	int i,count = 0;
	
	cout << "Enter the password : ";
	cin >> pass;

	int len = strlen(pass);	
	try
	{
		for(i=0; i<len; i++)
		{
			if(pass[i]>=65 && pass[i]<=90)
			{
				count++;	
			}
		}
		if(count >= 1)
		{
			cout << "Password is created !!";
		}
		else
		{
			throw pass;	
		}

	}
	catch(...)
	{
		cout << "Password is not creat!!";
	}
	return 0;
}