#include<iostream>
#include<string>
using namespace std;

int main()
{
  	string s="Rizwazn";
  	cout<<s.find_first_of('z')<<endl;
  	cout<<s.find_first_of('z',3)<<endl;
	cout<<s.find_last_of('z')<<endl;
	cout<<s.substr(2)<<endl;
 	cout<<s.substr(2,4)<<endl;
   	cout<<s.front()<<endl;
    cout<<s.back()<<endl;
	
	return 0;
}
