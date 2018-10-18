#include <stdio.h>

int prime(const int n);

int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("input wrong\n");
        return -1;
    }
    for(i = 2; i <= n / 2; ++i)
    {
        if (0 != prime(i) && 0 != prime(n - i))
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d can't sum of two prime numbers.\n", n);
    }
    else
    {
        printf("%d can sum of two prime numbers.\n", n);
    }
    return 0;
}

int prime(const int n)
{
    int i, flag = 1;
    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}
