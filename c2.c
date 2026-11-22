#include <stdio.h>

long long square(int n)
{
    return (long long)n * n;
}

long long cube(int n)
{
    return (long long)n * n * n;
}

long long factorial(int n)
{
    if (n < 0)
    {
        return 0;
    }
    long long f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    long long (*operations[3])(int) = {square, cube, factorial};

    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("\nResults using array of function pointers:\n");
    printf("1. Square of %d    : %lld\n", num, operations[0](num));
    printf("2. Cube of %d      : %lld\n", num, operations[1](num));
    printf("3. Factorial of %d : %lld\n", num, operations[2](num));

    return 0;
}
