#include <stdio.h>
int main()
{
	int n;
	printf("enter the size the matrix");
	scanf("%d",&n);
    int arr[n][n];
    int i,j,count=0;
    printf("Enter elements in matrix of size 3x3: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j] == 0)
            {
                count++;
            }
        }
    }

    if(count>=(i*j)/2)
    {
        printf("\nThe given matrix is a Sparse matrix.");
    }
    else
    {
        printf("\nThe given matrix is not Sparse matrix.");
}
}
