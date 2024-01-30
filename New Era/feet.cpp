#include<iostream>
using namespace std;
class Feet
{
	public : 
	
	int feet1,feet2,inc1,inc2;
	int feet,inche;
	int i;
	
	void input()
	{
		cout << "Enter the input 1 of feet :";
		cin >> feet1;
		cout << "Enter the input 1 of inche :";
		cin >> inc1;
		cout << "Enter the input 2 of feet :";
		cin >> feet2;
		cout << "Enter the input 2 of inche :";
		cin >> inc2;
		
		feet = feet1+feet2;
		inche = inc1 + inc2;
		
		for(i=1; i<=inche; i++)
		{
			if(inche>=12)
			{
				feet++;
				inche-=12;	
			}	
		}	
	}
	void output()
	{
		cout << "Feet is : " << feet << endl;
		cout << "Inche is : " << inche;	
	}	
};
main()
{
	Feet f1;
	
	f1.input();
	f1.output();
}
