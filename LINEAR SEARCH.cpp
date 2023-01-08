#include <stdio.h>
int main()
{
    int search, c, n;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    int array[n];
    for ( c = 0 ; c < n ; c++ )
        scanf("%d",&array[c]);
    printf("Enter the number to search\n");
    scanf("%d",&search);
    for ( c = 0 ; c <n ; c++ )
    {
        if ( array[c] == search )   /* if required element found */
        {
            printf("%d is present at location %d.\n", search, c+1);
            break;
        }
    }
    if ( c == search )
        printf("%d is not present in array.\n", search);
    return 0;
}
