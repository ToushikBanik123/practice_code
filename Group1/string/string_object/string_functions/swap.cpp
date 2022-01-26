#include <iostream>
#include<string>
using namespace std;

int main()
{
    // s.swap will swap 
    string s1="Hello";
    string s2="World";
    cout<<s1<<endl<<s2<<endl;
    s1.swap(s2);
    cout<<s1<<endl<<s2<<endl;

    
    return 0;
}
