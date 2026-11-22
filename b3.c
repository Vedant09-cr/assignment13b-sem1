#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    scanf("%[^\n]%*c", str1);

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    char *p1 = str1;
    char *p2 = str2;

    while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
    {
        p1++;
        p2++;
    }

    int diff = *p1 - *p2;

    printf("\nFirst string: %s\n", str1);
    printf("Second string: %s\n", str2);

    if (diff == 0)
    {
        printf("Result: Both strings are equal.\n");
    }
    else if (diff > 0)
    {
        printf("Result: First string is greater than second string (Difference = %d).\n", diff);
    }
    else
    {
        printf("Result: First string is smaller than second string (Difference = %d).\n", diff);
    }

    return 0;
}
