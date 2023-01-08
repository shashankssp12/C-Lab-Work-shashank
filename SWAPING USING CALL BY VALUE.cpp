#include <stdio.h> 
void swap(int, int);
int main()
{
   int K, J , a, b;
   printf("Enter the value of K and J\n");
   scanf("%d%d",&K,&J);
   printf("Before Swapping\nK = %d\nJ = %d\n", K, J);
   swap(K, J); 
   printf("After Swapping\nK = %d\nJ = %d\n",a,b);
}
void swap(int a, int b)
{
   int c;
   c = b;
   b = a;
   a =c;
   printf("Values of a and b is %d  %d\n",a,b);
}
