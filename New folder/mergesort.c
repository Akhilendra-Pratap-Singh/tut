#include <stdio.h>

void mergesort(int arr[], int arr1[], int low, int high, int mid)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    while (i < mid && j < high)
    {
        if (arr[i] < arr[j])
        {
            arr1[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            arr1[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        arr1[k] = arr[i];
    }
    while (j < high)
    {
        arr1[k] = arr[j];
    }
    for (int i = low; i < high; i++)
    {
        arr[i] = arr1[i];
    }
    return;
}

int main()
{

    int arr[5] = {7,
                  15, 2, 8, 10};

    int arr1[5];
    int low = 0;
    int high = 4;
    int mid = (low + high) / 2;

    mergesort(arr, arr1, low, high, mid);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}