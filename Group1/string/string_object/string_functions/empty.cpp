#include <iostream>
#include<string>
using namespace std;

int main()
{
    
    string s ="Hello World";
    s.clear();
    if(s.empty()){
        cout<<"No element"; 
    }else{
        cout<<s;
    }
   
    return 0;
}
