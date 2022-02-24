#include <iostream>

using namespace std;

int main()
{
    int a = 5; // 123 --> [5]
    cout <<a << endl;
    cout << &a <<endl; // 123(sym)
    
    int *p = &a;
    cout<< p <<endl;
    cout<< &p <<endl;
    cout<< *p <<endl;
    
    /*
    int i;
    int* pi = &i;
    float f;
    float* pf =&f;
    char c;
    char* pc =&c;
    */
    
    return 0;
}
