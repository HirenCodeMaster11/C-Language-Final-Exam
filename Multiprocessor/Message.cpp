#include<iostream>
using namespace std;

class Msg
{
	string msg;
	
	public :
		
		Msg(string msg)
		{
			this->msg = msg;
		}
		
		void print()
		{
			cout << msg << endl;
		}
		void print(string NewMsg)
		{
			cout << msg << " " << NewMsg << endl;
		}
};
int main()
{
	Msg m1("Hello");
	m1.print();
	m1.print("Flutter");
	
	return 0;
}