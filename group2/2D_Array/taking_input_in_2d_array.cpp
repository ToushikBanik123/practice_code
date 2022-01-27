#include <iostream>

using namespace std;

int main()
{
    int a[3][3];
    
    //int b[3]={1,2,3};
    
    for(int j=0;j<3;j++){
    for(int i=0;i<3;i++){
        cout<<"["<<j<<"]["<<i<<"]";
       cin>>a[j][i]; 
    }
    }
    
    for(int j=0;j<3;j++){
    for(int i=0;i<3;i++){
       cout <<a[j][i]; 
    }
    cout << endl;
    }
    
    
    
    /*
    
    for(int i=0;i<3;i++){
       cout <<a[1][i]; 
    }
    cout << endl;
    for(int i=0;i<3;i++){
       cout <<a[2][i]; 
    }
    
    */
    
    
    
    
    
    /*
    for(int i=0;i<3;i++){
      cout <<b[i]<<endl;   
    }
   */

    
    
    /*
    cout <<a[2][2];
    */
    
    
    return 0;
}
