#include <iostream>

using namespace std;



int main()
{
    int x,y;
    cin>>x>>y;
    for(int i =x ; i<y;i++){
    int n = i;
    int temp = n;
    int rev = 0;
    int count;
    while(temp>0){
        count = temp %10;
        rev = (rev * 10) + count;
        temp = temp/10;
    }
    if(n==rev){
        cout << n<<endl;
    }
        
    }


    return 0;
}

