
#include <iostream>

using namespace std;

int main()
{
    int arr[]={10,7,8,9,1,5,6};
    int s;
    cin >> s;
    int j=0;
    
    for (auto i : arr) {
        cout<< j << endl;
      if(s==arr[j]){
          cout << "we have the element at index " << j << endl;
          return 0;
      }
      j++;
    }
     cout<< "No element found";
    
   return 0;
}
