#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    
    char s1[10]="2569";
    char s2[10]="29.69";

    long x = strtol(s1,NULL,10);
    float y=strtof(s2,NULL);
    cout << x;
    
    
    
    /*
    char s1[20]="programing";
    int i=0,count=0;
    while(s1[i]!= '\0'){
        if(s1[i]=='g'){
            s1[i]='o';
            count++;
        }
        i++;
    }
    
    cout<<s1;
    */
    /*
    char s1[20]="programing";
    //char s2[10]="min";
   char s2 = 'r';
   //cout<<strstr(s1,s2);
    cout<< strchr(s1,s2);
*/
    return 0;
}
