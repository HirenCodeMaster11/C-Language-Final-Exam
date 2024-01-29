#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int sec,minute,hour = 0;
	int i;
	
	cout << "Enter the second : ";
	cin >> sec;
	
	for(i=1; i<=sec; i++)
	{
		if(sec>=60)
		{
			sec-=60;
			minute++;
		}
		if(minute >= 60)
		{
			minute = 60-minute;
			hour++;
		}
	}

	cout << "Time is : ";
	cout << hour << " : " << minute << " : " << sec;
	return 0;
}
