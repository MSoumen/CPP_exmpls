#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

ifstream input_file;
ofstream output_file;

int main()
{
	input_file.open("out.txt");
	int s,d, a,b;
	input_file>>a>>b;
	s=a+b;
	d=a-b;
	output_file.open("out.txt",ios::app);
	output_file<<s<<"\n"<<d<<endl;
	input_file.close();
	output_file.close();
}