// Write a program to find the factorial of any number using linear recursion.
#include <stdio.h> #include<stdlib.h>
int fact(int n)
{
    if (n > 1)
        return n * fact(n - 1);
}
int main()
{
    int n, temp;
    printf("enter a no.");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("factor is not possible");
    }
    else if (n == 0)
    {
        printf(" factorial is 1");
    }
    else
    {
        temp = fact(n);
        printf("%d", temp);
    }
    return 0;
}
