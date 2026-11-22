#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int trans[cols][rows];

    int (*p)[cols] = matrix;
    int (*tp)[rows] = trans;

    printf("Enter elements of %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", *(p + i) + j);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            *(*(tp + j) + i) = *(*(p + i) + j);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%4d ", *(*(p + i) + j));
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%4d ", *(*(tp + i) + j));
        }
        printf("\n");
    }

    return 0;
}
