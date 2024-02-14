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
			cout << "enter the value of b :";
			cin >> b;
		}
		void get()
		{
			cout << "value of a :" << a << endl << "value of b :" << b << endl;
		}
		
		A operator-(A &a2)
		{
			A temp;
			
			int x = this->a - a2.a;
			int y = this->b - a2.b;
			
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
	
	a3 = a1 - a2;
	a3.get();
	return 0;
}