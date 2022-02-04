#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int  a,temp;
    cout << "Enter Your Number : ";
    cin>>a;
    int x =0;
    int arr[20]={};
    while(a>0){
       arr[x]=(a%2);
       a=a/2;
       x++;
    }
    int j =x - 1;
    for (int i = 0;i < x/2; i++, j--)  
    {     
        temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }
    
    cout <<"Your Number in Binary : ";
    for(int i = 0;i<x;i++){
        cout << arr[i];
    }
    return 0;
}
