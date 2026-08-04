#include<stdio.h>
#include<string.h>

int main()
{
    char a[20] = "Rajshahi";
    char b[20] = "Dhaka";

    int strlen(char*string);

    int l=strlen(a);
    int w=strlen(b);

    printf("Value of a is: %s\n", a);
    printf("Value of b is: %s\n", b);
    printf("Length of your string is: %d\n",l);
    printf("Width of your string is: %d\n",w);

    return 0;
}
