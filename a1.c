#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    int *p = arr;
    int max = *p;
    int min = *p;

    for (int i = 1; i < n; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
        if (*(p + i) < min)
        {
            min = *(p + i);
        }
    }

    printf("\nArray elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    return 0;
}
