#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << " lower bound :";
    cin>>x;
    cout <<" uper bound : ";
    cin>>y;
    for(int i = x ;i < y; i++){
    int n,sum=0;
    n = i;
    int tem = n;
    while(tem>0){
        sum = sum + (tem%10);
        tem = tem / 10;
    }
    if(n%sum == 0){
        cout<<" Harshad : " << n<<endl;
    }
    }
    return 0;
}
