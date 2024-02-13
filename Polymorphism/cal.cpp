#include<iostream>
using namespace std;

class A
{
	protected :
		int a,b,c,d,e;
		
};

class B : public A
{
	public :
		
		void cal(int a,int b)
		{
			cout << "Division is " << a/b << endl;
		}
		void cal(int a,int b,int c)
		{
			cout << "Subtraction is " << a-b-c << endl;
		}
		void cal(int a,int b,int c,int d)
		{
			cout << "Multiplication is " << a*b*c*d << endl;
		}
		void cal(int a,int b,int c,int d,int e)
		{
			cout << "Addition is " << a+b+c+d+e << endl;
		}
};
int main()
{
	int a,b,c,d,e;
	
	cout << "Enter the value of a : ";
	cin >> a;
	cout << "Enter the value of b : ";
	cin >> b;
	cout << "Enter the value of c : ";
	cin >> c;
	cout << "Enter the value of d : ";
	cin >> d;
	cout << "Enter the value of e : ";
	cin >> e;
	
	B b1;
	b1.cal(a,b);
	b1.cal(a,b,c);
	b1.cal(a,b,c,d);
	b1.cal(a,b,c,d,e);
	
	return 0;
}
