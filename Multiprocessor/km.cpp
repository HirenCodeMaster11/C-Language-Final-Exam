#include<iostream>
using namespace std;

class Km
{
	int km,meter;
	
	public :
		void set()
		{
			cout << "Enter the KM :";
			cin >> km;
			cout << "Enter the METER :";
			cin >> meter;
		}
		void get()
		{
			cout << "value of KM :" << km << endl << "value of METER :" << meter << endl;
		}
		
		Km operator+(Km &k2)
		{
			Km temp;
			int i;
			
			int x = this->km + k2.km;
			int y = this->meter + k2.meter;
						
			for(i=1; i<=y; i++)
			{
				if(y>=1000)
				{
					x++;
					y-=1000;	
				}	
			}
			
			temp.km = x;
			temp.meter = y;
			
			return temp;
		}
};
int main()
{
	Km k1,k2,k3;
	
	k1.set();
	k2.set();
	
	k3 = k1 + k2;
	k3.get();
	return 0;
}