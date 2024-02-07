#include<iostream>
using namespace std;

class P
{
	protected:	
	
	float Celsius;
	
	public :
		void cal()
		{
			cout << "Enter the temperature in Celsius : ";
			cin >> Celsius;	
		}
};
class Q : public P
{
	protected:
	
	float Fahrenheit;
	
	public :
		 
	void fat()
	{
		Fahrenheit = (Celsius * 9/5) + 32;
	}	 	
};
class R : public Q
{
	protected : 
	
	float Kelvin;
	
	public :
		void set()
		{
			cal();
			fat();
			Kelvin = (Fahrenheit - 32) * 5/9 + 273.15;
		}
		void get()
		{
			cout << "Celsius is : " << Celsius << endl;
			cout << "Fahrenheit is : " << Fahrenheit << endl;
			cout << "Kelvin is : " << Kelvin << endl;
		}
};

int main()
{
	R r1;

	r1.set();
	r1.get();
	
	return 0;
}
