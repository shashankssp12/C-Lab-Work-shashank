#include <stdio.h>
int main()
{
	int n;
	printf("enter the size ofd the array");
	scanf("%d",&n);
    int arr[n][n];
    int i,j,sum= 0;
    printf("Enter elements in matrix of size %d\n",n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum = sum + arr[i][i];
    }
    printf("\nSum of main diagonal elements = %d", sum);
}
