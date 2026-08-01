#include<stdio.h>

int Prime(int n)
{
    int i;

    if(n < 2)
        return 0;

    for(i=2; i<n; i++)
    {
        if(n%i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;

    scanf("%d", &n);

    if(Prime(n))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
