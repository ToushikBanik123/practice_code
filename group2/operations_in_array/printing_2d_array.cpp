#include <iostream>

using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6};
    int arr2[2][3]={{2,3,4},{6,4,7}};
    
    /*
    arr2[0][1]=0;
    cout << arr2[0][1];
    */
    /*
    //print my 1d array
    for(int i=0; i<10;i++) {
        cout<<arr[i];
    }
    */
    /*
    cout << arr2[0][0];
    cout << arr2[0][1];
    cout << arr2[0][2];
    
    */
    /*
    for(int i=0;i<3;i++){
       cout << arr2[0][i]; 
    }
    cout << endl;
    */
    /*
    cout << arr2[1][0];
    cout << arr2[1][1];
    cout << arr2[1][2];
    */
    /*
    for(int i=0;i<3;i++){
       cout << arr2[1][i]; 
    }
    */
    
    /*
    for(int i=0;i<3;i++){
       cout << arr2[0][i]; 
    }
    cout << endl;
    for(int i=0;i<3;i++){
       cout << arr2[1][i]; 
    }
    */
    
    
    for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
       cout << arr2[i][j]; 
    }
    cout << endl;
    }

    return 0;
}
