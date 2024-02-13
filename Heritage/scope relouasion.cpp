#include<iostream>
using namespace std;

class A
{
	protected :
		
		int a;
		
		public :
			void set()
			{
				cout << "Enter the class A value of a : ";
				cin >> a;
			}
					
};

class B
{
	protected :
		int a;
		
		public :
			void set()
			{
				cout << "Enter the class B value of a : ";
				cin >> a;
			}		
};

class C : public A,public B
{
	public :
		
		void get()
		{
			cout << "Class A and value of a is " << A::a << endl << endl;
			cout << "Class B and value of a is " << B::a << endl << endl;
		}
		
};

int main()
{
	A a1;
	B b1;
	C c1;
	
	a1.set();
	b1.set();
	c1.get();
	
	return 0;
}