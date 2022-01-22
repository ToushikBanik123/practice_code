#include <iostream>
using namespace std;
int main()
{   
    int item[9]={19,15,12,9,7,5,3,1};
    int mid,first,last,number;
    cout<<"enter your element "<<endl;
    cin>>number;
    first=0;last=9;
    int a=0;
 
    while(first<=last)
    {
        if(item[mid]==number)
        {
            cout<<"Your number is "<<number<<" and your index is "<<mid<<endl;
        a=1;
        break;
            
        }
        else if(item[mid]<number)
        {
            last=mid-1;
        }
        else if(item[mid]>number) 
        {
            first=mid+1;
        }
        mid=(first+last)/2;
    
    }
    if(a==0)
    {
        cout<<"no number is present";
    }
    return 0;
}
