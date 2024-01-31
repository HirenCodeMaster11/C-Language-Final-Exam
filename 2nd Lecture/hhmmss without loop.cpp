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
		
		hour = sec / 3600;
        min = (sec % 3600) / 60;
        sec = sec % 60;
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