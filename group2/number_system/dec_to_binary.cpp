#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int  a;
    cout << "Enter Your Number : ";
    cin>>a;

    int c = 0;
    int i = 0;
    while(a>0){
        c = c + ((a%2)*pow(10,i));
        a=a/2;
        i++;
    }
    cout <<"Your Number in Binary : " << c;
    return 0;
}
