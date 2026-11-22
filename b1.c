#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    char *ptr = str;
    int length = 0;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("Entered string: %s\n", str);
    printf("Length of the string: %d\n", length);

    return 0;
}
