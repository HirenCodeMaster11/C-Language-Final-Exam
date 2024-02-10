#include<iostream>
using namespace std;

class RBI
{
	protected :
		
		float  intrest,intrest2,intrest3;
		
		public :
			
			void sbi()
			{
				
				cout << "SBI bank Intrest is ";
				cin >> intrest;
			}
			void bob()
			{
				cout << "BOB bank Intrest is ";
				cin >> intrest2;
			}
			void icici()
			{
				cout << "ICICI bank Intrest is ";
				cin >> intrest3;
			}
};

class SBI : public RBI
{
		public :
			void get()
			{
				sbi();
				cout << "Your Bank Intrest Rate is " << intrest << " % of your Loan" << endl << endl;
			}
};

class BOB : public RBI
{
		public :
			void get1()
			{
				bob();
				cout << "Your Bank Intrest Rate is " << intrest2 << " % of your Loan" << endl << endl;
			}
};

class ICICI : public RBI
{
		public :
			void get2()
			{
				icici();
				cout << "Your Bank Intrest Rate is " << intrest3 << " % of your Loan" << endl << endl;
			}
};

int main()
{
	SBI s1;
	s1.get();
	BOB b1;
	b1.get1();
	ICICI i1;
	i1.get2();
		
	return 0;
}
