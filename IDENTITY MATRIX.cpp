#include <stdio.h>
int main()
{
	int n;
	printf("enetr the size of the array");
	scanf("%d",&n);
    int arr[n][n];
    int i,j,identity;
    printf("Enter elements in matrix of size %d*%d\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    identity= 1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j && arr[i][j]!=1)
            {
                identity= 0;
            }
            else if(i!=j && arr[i][j]!=0)
				  {      
                
            identity = 0;
            }
        }
    }
    if(identity == 1)
    {
        printf("\nThe given matrix is an Identity Matrix.\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The given matrix is not Identity Matrix");
}
}
