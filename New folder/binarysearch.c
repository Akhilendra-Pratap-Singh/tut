#include <stdio.h>

int binarysearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{

    int size;
    printf("Enter the size of the array");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the element that you want to search");
    scanf("%d", &key);

    int x = binarysearch(arr, size, key);

    if (x == -1)
    {
        printf("The key is not in the array");
    }
    else
    {
        printf("The array is found at the index %d", x);
    }

    return 0;
}