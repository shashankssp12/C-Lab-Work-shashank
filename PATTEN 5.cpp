#include <stdio.h>
int main()
{
    int rows, col, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=col; j++)
        {
            if(i%2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}
