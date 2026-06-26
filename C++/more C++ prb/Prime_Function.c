#include <stdio.h>

void prime(int n)
{
    int i, flag = 1;

    if (n <= 1)
        flag = 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");
}

int main()
{
    int n;
    scanf("%d", &n);
    prime(n);
    return 0;
}
