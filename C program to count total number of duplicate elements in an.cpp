#include <stdio.h>

#define MAX_SIZE 100  // Maximum array size

int main()
{
    int i, j, n, count = 0;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    
	}
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);
}
