#include <stdio.h>

int ascending(int a, int b)
{
    return a > b;
}

int descending(int a, int b)
{
    return a < b;
}

void sort(int *arr, int n, int (*compare)(int, int))
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compare(*(arr + j), *(arr + j + 1)))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr1 + i);
        *(arr2 + i) = *(arr1 + i);
    }

    printf("\nOriginal array: ");
    print_array(arr1, n);

    sort(arr1, n, ascending);
    printf("Array sorted in ascending order: ");
    print_array(arr1, n);

    sort(arr2, n, descending);
    printf("Array sorted in descending order: ");
    print_array(arr2, n);

    return 0;
}
