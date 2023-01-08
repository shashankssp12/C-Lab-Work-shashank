#include <stdio.h>
int main()
{
   int A,B,*a,*b,s;
   printf("Enter two integers to add\n");
   scanf("%d%d", &A, &B);
   a= &A;
   b= &B;
   s= *a + *b;

   printf("Sum of the numbers %d\n", s);

}
