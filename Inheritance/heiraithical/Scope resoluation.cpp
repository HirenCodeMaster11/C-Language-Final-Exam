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

class B : public A
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

class C : public B
{

	public :
		
		void set()
		{
			A::set();
			B::set(); 
		}
		void get()
		{
			cout << "Class A and value of a is " << A::a << endl << endl;
			cout << "Class B and value of a is " << B::a << endl << endl;
		}
		
};

int main()
{
	C c1;
	c1.set();
	c1.get();
	return 0;
}
