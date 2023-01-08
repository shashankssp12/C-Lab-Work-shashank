#include <stdio.h>
int main()
{
    int num,i,j,n;
    printf("enter the size of matrix");
    scanf("%d",&n);
    printf("Enter elements in matrix of size %d \n",n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
}
    printf("Enter any number to multiply with matrix A: ");
    scanf("%d", &num);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j] = num*arr[i][j];
        }
    }
    printf("\nResultant matrix= \n");
    for(i=0; i<n;i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
		   printf("\n");
    }
}
