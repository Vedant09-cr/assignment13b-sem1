#include <stdio.h>

int str_length(const char *s)
{
    int len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}

void str_copy(char *dest, const char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int str_compare(const char *s1, const char *s2)
{
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main()
{
    int (*fp_len)(const char *) = str_length;
    void (*fp_copy)(char *, const char *) = str_copy;
    int (*fp_cmp)(const char *, const char *) = str_compare;

    char str1[100];
    char str2[100];
    char copied[100];

    printf("Enter first string: ");
    scanf("%[^\n]%*c", str1);

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    int len1 = fp_len(str1);
    int len2 = fp_len(str2);

    fp_copy(copied, str1);

    int cmp_result = fp_cmp(str1, str2);

    printf("\n=== String Operations using Function Pointers ===\n");
    printf("1. Length Operation:\n");
    printf("   Length of \"%s\" = %d\n", str1, len1);
    printf("   Length of \"%s\" = %d\n\n", str2, len2);

    printf("2. Copy Operation:\n");
    printf("   Source string: %s\n", str1);
    printf("   Copied string: %s\n\n", copied);

    printf("3. Compare Operation:\n");
    printf("   Comparing \"%s\" and \"%s\":\n", str1, str2);
    if (cmp_result == 0)
    {
        printf("   Result: Both strings are identical.\n");
    }
    else if (cmp_result > 0)
    {
        printf("   Result: First string is greater than second string (diff = %d).\n", cmp_result);
    }
    else
    {
        printf("   Result: First string is smaller than second string (diff = %d).\n", cmp_result);
    }

    return 0;
}
