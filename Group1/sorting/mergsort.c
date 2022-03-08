#include <stdio.h>
#include <stdlib.h>

void merge(int[20], int, int, int);
void mergesort(int[20], int, int);
void display(int[20], int);

int main()
{
    int n, arr[20];
    printf("Enter the number of the element in the array :");
    scanf("%d", &n);
    printf("Enter the elements of the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Display before sorting : \n");
    display(arr, n);
    mergesort(arr, 0, n - 1);
    printf("Display after sorting : \n");
    display(arr, n);
    return 0;
}

void display(int arr[20], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void merge(int arr[20], int low, int mid, int high)
{
    int i, j, k, B[20];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            B[k] = arr[j];
            k++;
            j++;
        }
    }
    if (i > mid)
    {
        while (j <= high)
        {
            B[k] = arr[j];
            k++;
            j++;
        }
    }
    if (j > high)
    {
        while (i <= mid)
        {
            B[k] = arr[i];
            k++;
            i++;
        }
    }
    for (k = low; k <= high; k++)
    {
        arr[k] = B[k];
    }
}
void mergesort(int arr[20], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, (mid + 1), high);
        merge(arr, low, mid, high);
    }
};
