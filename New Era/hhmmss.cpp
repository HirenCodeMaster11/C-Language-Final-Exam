#include<iostream>
using namespace std;
class Sec
{
	public : 
	
	int sec,min,hour;
	int i;
	
	void input()
	{
		cout << "Enter the Second :";
		cin >> sec;
		
		for(i=1; i<=sec; i++)
		{
			if(sec>=60)
			{
				min++;
				sec-=60;	
			}
			
			if(min>=60)
			{
				hour++;
				min-=60;	
			}	
		}	
	}
	void output()
	{
		cout << hour << " : " << min << " : " << sec << endl;	
	}	
};
main()
{
	Sec s1;
	
	s1.input();
	s1.output();
}
