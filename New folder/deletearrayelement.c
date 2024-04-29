#include <stdio.h>

int main()
{

    int arr[50];

    printf("The number of elements that you want to enter\n");
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // int num;
    // printf("Enter the element that you want to enter\n");
    // scanf("%d", &num);

    int pos;
    printf("Enter the position that you want to delete from\n");
    scanf("%d", &pos);

    for (int i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}