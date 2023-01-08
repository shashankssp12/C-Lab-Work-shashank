#include <stdio.h>

int main()
{
    int ba, exp;
    int power = 1;
    int i;
    printf("Enter base: ");
    scanf("%d", &ba);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    for(i=1; i<=exp; i++)
    {
        power = power * ba;
    }

    printf("power is = %d", power);

    return 0;
}
