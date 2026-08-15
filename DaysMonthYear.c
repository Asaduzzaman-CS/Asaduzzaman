#include <stdio.h>

int main()
{
    int days, years, months;

    scanf("%d", &days);

    years = days / 365;
    days = days % 365;

    months = days / 30;
    days = days % 30;

    printf("%d\n", years);
    printf("%d\n", months);
    printf("%d\n", days);

    return 0;
}
