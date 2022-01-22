#include <iostream>

using namespace std;

int main()
{
    int first,last,mid,num;
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=i;
    }
   cout << "Enter the eement you want to search : " <<endl;
   cin >> num;
   first=0;
   last=9;
   bool a=0;
   mid=(first+last)/2;
   while(first<=last){
       if(arr[mid]==num){
           cout<<"The number is foud at index "<<mid<<endl;
           a=1;
           break;
       }else if(arr[mid]<num){
           first= mid+1;
       }else if(arr[mid]>num){
           last=mid-1;
       }
       mid=(first+last)/2;
   }
   if(a==0){
       cout << "we dont have the element " << endl;
   }
    
    

    return 0;
}
