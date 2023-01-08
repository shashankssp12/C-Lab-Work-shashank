#include <stdio.h>
int main()
{
    int rows, c = 1, d, i, j;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=0; i<rows; i++)           
    {
        for(d=1; d <= rows-i; d++)  
            printf("  ");

        for(j=0; j <= i; j++)     
        {
            if (j==0 || i==0)     
                c = 1;
            else
                c = c*(i-j+1)/j;  

            printf("%d", c);
        }
        printf("\n");
    }

    return 0;
}
