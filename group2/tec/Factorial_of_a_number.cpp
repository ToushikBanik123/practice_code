
#include <iostream>

using namespace std;

int main()
{
   int n;
   long long int r=1;
   cin>>n;
   while(n>0){
       r=n*r;
       n--;
        
   }
   cout<<r;

    return 0;
}
