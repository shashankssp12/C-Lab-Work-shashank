#include <stdio.h>

int main()
{
    int unit;
    int amt, totalamt, surcharge;

    printf("Enter total units consumed: ");
    scanf("%d", &unit);



    if(unit <= 50)
    {
        amt = unit * 10;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 120);
    }
    else
    {
        amt = 220 + ((unit-250) * 150);
    }
    surcharge = amt * 20;
    totalamt  = amt + surcharge;

    printf("Electricity Bill = Rs. %d", totalamt);

    return 0;
}
