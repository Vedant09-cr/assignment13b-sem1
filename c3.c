#include <stdio.h>

int linear_search(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int (*search_ptr)(int *, int, int) = linear_search;

    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    int index = search_ptr(arr, n, key);

    if (index != -1)
    {
        printf("Element %d found at index %d (position %d).\n", key, index, index + 1);
    }
    else
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
