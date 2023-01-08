#include<stdio.h>  
 int main()    
{    
int a,b,c;
 scanf("%d%d",&a,&b);
printf("Before swap a=%d b=%d",a,b);      
c=a;
a=b;
b=c;
printf("\nAfter swap a=%d b=%d",a,b);    
      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;    
b=a-b;    
a=a-b;    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
  
}   
