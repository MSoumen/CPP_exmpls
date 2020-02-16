#include <iostream>
#include <iomanip>

using namespace std;
	
int main()
{
	float a,b,s;
	cin>>a>>b;
	s=a*b;
	//cout<<setprecision(2)<<s<<endl;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<s<<endl;
	cout.precision(3);
	cout<<a+b<<endl;
cout.precision(4);
	cout<<a+b<<endl;
	cout.precision(5);
		cout<<a+b<<endl;
	
	
}