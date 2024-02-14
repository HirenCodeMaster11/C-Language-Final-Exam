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
			cout << "higher value of a :" << a  << endl << "higher value of b :" << b << endl ;
		}
		
		A operator<(A &a2)
		{
			A temp;
			
			int x = this->a < a2.a;
			int y = this->b < a2.b;
			
			if(this->a < a2.a && this->b < a2.b) 
			{
				x = a2.a;
				y = a2.b;
			}
			else if (this->a > a2.a && this->b > a2.b)
			{
				x = this->a;
				y = this->b;
			}
			else if(this->a < a2.a && this->b > a2.b)
			{
				x = a2.a;
				y = this->b;
			}
			else
			{
				x = this->a;
				y = a2.b;
			}
			
			temp.a = x;
			temp.b = y;
			return temp;
		}
};
int main()
{
	A a1,a2,a3;
	
	a1.set();//1,2,
	a2.set();//3,4
	
	a3 = a1 < a2;
	a3.get();
	return 0;
}
