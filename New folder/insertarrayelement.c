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

    int num;
    printf("Enter the element that you want to enter\n");
    scanf("%d", &num);

    int pos;
    printf("Enter the position that you want to insert in\n");
    scanf("%d", &pos);

    if (pos > n + 1 || pos <= 0)
    {
        printf("Invalid Position\n");
    }
    else
    {
        for (int i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
    }
    arr[pos - 1] = num;
    n++;

    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}