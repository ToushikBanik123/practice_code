#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int count =0,sum =0;
    
    
    /*
    for (int i = 0; i<5;i++){
        cout << "Enter yout " << i+1 <<"th elemnt : ";
        cin >> arr[i];
    }*/
    for (auto i : arr) {
        cout << "Enter yout " << count+1 <<"th elemnt : ";
        cin >> arr[count];
        count++;
    }
    count =0;
    
    for (auto i : arr) {
        cout << "Your "<< count + 1 <<"elemnt is " << i<< endl;
    }
    
    for (auto i : arr) {
        sum = sum + i;
    }
    
    /*
    
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }*/
    cout << "******* Your Sum/ Total is "<<sum<<"********";
    return 0;
}
