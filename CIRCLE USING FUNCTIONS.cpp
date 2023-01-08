#include <stdio.h>
int Diameter(int radius);
int Circumference(int radius);
int Area(int radius);
int main() 
{
    int radius, dia, circ, area;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    dia  =Diameter(radius); 
    circ =Circumference(radius);
    area =Area(radius); 
    
    printf("Diameter of the circle = %d units\n", dia);
    printf("Circumference of the circle = %d units\n", circ);
    printf("Area of the circle = %d units", area);
}
int Diameter(int radius) 
{
    return (2 * radius);
}
int Circumference(int radius) 
{
    return (2 *3.14* radius); 
}
int Area(int radius)
{
    return (3.14* radius * radius);
}
