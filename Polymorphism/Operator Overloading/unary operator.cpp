#include<iostream>
using namespace std;

class A
{
	int a,b;
	
	public :
		void set()
		{
			cout << "enter the value of a :";
			cin >> a;
		}
		void get()
		{
			cout << "a1 value of a :" << a << endl << "a2 value of a :" << b << endl;
		}
		
		A operator+(A &a2)
		{
			A temp;
			
			int x;
			int y;
			
			this->a ++;
			a2.a ++;
			
			x = this->a;
			y = a2.a;
			
			temp.a = x;
			temp.b = y;
			
			return temp;
		}
};
int main()
{
	A a1,a2,a3;
	
	a1.set();
	a2.set();
	
	a3 = a1 + a2;
	a3.get();
	return 0;
}
