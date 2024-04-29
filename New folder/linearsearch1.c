#include <stdio.h>

void linearsearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("The key is found at the index at %d\n", i);
        }
    }
    return;
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

    linearsearch(arr, size, key);

    return 0;
}