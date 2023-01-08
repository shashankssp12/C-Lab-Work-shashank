#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float r;

    printf("Enter any number to find the square root::\n");
    scanf("%d\n", &n);

    r = sqrt(n);

    printf("Square root of %f = %f", n, r);
	 int a,b , p;
    printf("Enter  number to find the [power]\n");
    printf("Enter number how many power you want\n");
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    p=pow(a,b);
    
    printf("power of the given number is %f",p);
    
    return 0;
}
