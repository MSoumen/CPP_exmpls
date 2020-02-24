#include <iostream>
#include <string>
using namespace std;
int main(){
	string line,word("apple ");
	//cin>>line; //---only take before a space--
	getline(cin,line);
	cout<<word<<line<<endl;
	
}
