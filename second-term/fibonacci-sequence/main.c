#include <stdio.h>

int fib(int n);
int fib_sum(int n);
int fib_with_recursion(int n);

int main()
{
    int n, op;
    do
    {
        printf("1. Fibonacci without recursion\n");
        printf("2. Sum of n fibonacci numbers\n");
        printf("3. Fibonacci with recursion\n");
        printf("4. Exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            do
            {
                printf("\nn=");
                scanf("%d", &n);
            } while (n < 0);
            printf("\nsum=%d\n", fib(n));
            break;
        case 2:
            do
            {
                printf("\nn=");
                scanf("%d", &n);
            } while (n < 0);
            printf("\nsum=%d\n", fib_sum(n));
            break;
        case 3:
            do
            {
                printf("\nn=");
                scanf("%d", &n);
            } while (n < 0);
            printf("\nsum=%d\n", fib_with_recursion(n));
            break;
        case 4:
            return 0;
        default:
            printf("\nIncorrect choice!\n");
            break;
        }
    } while (1);
}

int fib(int n)
{
    int num1 = 0, num2 = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
    return num1;
}

int fib_sum(int n)
{
    int num1 = 0, num2 = 1, sum = 0, overall_sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
        overall_sum += num1;
    }
    return overall_sum;
}

int fib_with_recursion(int n)
{
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}