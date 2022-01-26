#include <iostream>
#include<string>
using namespace std;

int main()
{
    
    string s ="HelloWorldjksdskjakjsjkandkjakdakj";
  
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    s.resize(100);
    cout<<s.capacity();

    return 0;
}
