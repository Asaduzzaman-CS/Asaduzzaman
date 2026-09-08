#include <stdio.h>

int main()
{
    int a, b, c;
    int x, y, z;
    int temp;

    scanf("%d %d %d", &a, &b, &c);

    x = a;
    y = b;
    z = c;

    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if(a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }

    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    printf("\n");

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}
