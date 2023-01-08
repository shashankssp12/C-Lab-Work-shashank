#include <stdio.h>

int main()
{
  int n,i,j,a;
  printf ("Enter the number of elements");
  scanf ("%d",&n);
  int arr[n];
  printf("Enter the values");
  for (i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
   {
     if(arr[i]>arr[j])
    {   
       a = arr[i];
       arr[i]=arr[j];
       arr[j]=a;
     }   
   }

  }
     printf("Second largest element is %d",arr[n-2]);

}

