#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*func_ptr)(int, int) = add;

    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int sum = func_ptr(num1, num2);

    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    printf("Sum using function pointer: %d\n", sum);

    return 0;
}
