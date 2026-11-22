#include <stdio.h>

int main()
{
    char src[100];
    char dest[100];

    printf("Enter the source string: ");
    scanf("%[^\n]", src);

    char *s = src;
    char *d = dest;

    while (*s != '\0')
    {
        *d = *s;
        s++;
        d++;
    }
    *d = '\0';

    printf("Source string: %s\n", src);
    printf("Copied destination string: %s\n", dest);

    return 0;
}
