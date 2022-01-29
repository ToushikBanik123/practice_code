#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 6, 7, 5};
    int min = 500;
    int x;
    for (int i = 0; i <= sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            x = i;
        }
    }
    min = 500;
    for (int i = 0; i <= sizeof(arr) / sizeof(int); i++)
    {
        if (i == x)
        {
            continue;
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Our 2nd min : "<<min << endl;

    return 0;
}
