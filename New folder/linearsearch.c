#include <stdio.h>

int linearsearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            // printf("The key is found at the index at %d", i);
            return i;
        }
    }
    return -1; // Element not found
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

    int x = linearsearch(arr, size, key);
    if (x == -1)
    {
        printf("The key is not in the array");
    }
    else
    {
        printf("The element is found at the index %d", x);
    }

    return 0;
}