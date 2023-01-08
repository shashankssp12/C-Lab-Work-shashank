#include <stdio.h>

int main()

{
    int num;

    int digit,rem,count=0;

    printf("Enter the Number:");

    scanf("%d",&num);

    printf("Enter the digit to be counted:");

    scanf("%d",&digit);

    while(num!=0)
    {

       rem=num%10;

       if(rem==digit)
        
       count++;
       
       num=num/10;
    }

printf("The digit %d present %d times ",digit,count);

    }

