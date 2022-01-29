#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 5};
    int max = arr[0];
    int secondmax = -1000;

    for (int i = 1; i <= sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] > max)
        {
            secondmax = max;
            max = arr[i];
        }
    }

    printf("Second largest element is %d", secondmax);

    return 0;
}
