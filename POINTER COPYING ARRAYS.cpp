#include <stdio.h>
void printArray(int arr[], int size);
int main()
{
	int n=100;
    int source[n], dest[n];
    int size, i;
    int *sourcep= source;
    int *destp   = dest;
    int *endp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (sourcep + i));
    }
    endp= &source[size - 1];
    printf("\nSource array before copying: ");
    printArray(source, size);
    printf("\nDestination array before copying: ");
    printArray(dest, size);
    while(sourcep <= endp)
    {
        *destp = *sourcep;
        sourcep++;
        destp++;
}
    printf("\n\nSource array after copying: ");
    printArray(source, size);

    printf("\nDestination array after copying: ");
    printArray(dest, size);
    return 0;
}
