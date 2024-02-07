#include<iostream>
using namespace std;

class X
{
	protected :
		
		int a,b,c,sum;
};
class Y : public X
{
	public :
		set()
		{
			cout << "Enter the value of a : ";
			cin >> a;
			cout << "Enter the value of b : ";
			cin >> b;
			cout << "Enter the value of c : ";
			cin >> c;
			sum = a+b+c;
		}
		get()
		{
			cout << "a+b+c sum : " << sum << endl <<"Cube of a+b+c : " << sum * sum * sum;	
		}	
};

int main()
{
	Y y1;
	
	y1.set();
	y1.get();
	
	return 0;
}
