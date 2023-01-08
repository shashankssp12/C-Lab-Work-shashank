#include <stdio.h>

int main()
{
	int n;
	printf("enter the size of the array");
	scanf("%d",&n);
    int a[n];
    int i, sum=0;
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
	    }

    for(i=0; i<n; i++)
    {
        sum += a[i];
    }

    printf("Sum of all elements stored in the array is : %d\n\n", sum);
}
