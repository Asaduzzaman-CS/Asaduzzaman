#include <stdio.h>

int main()
{
    int code, amount;
    double price, total;

    scanf("%d %d", &code, &amount);

    switch(code)
    {
        case 1:
            price = 4.00;
            break;

        case 2:
            price = 4.50;
            break;

        case 3:
            price = 5.00;
            break;

        case 4:
            price = 2.00;
            break;

        case 5:
            price = 1.50;
            break;
    }

    total = price * amount;

    printf("Total: R$ %.2lf\n", total);

    return 0;
}
