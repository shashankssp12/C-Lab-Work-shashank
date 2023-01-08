#include<stdio.h>  
int main()  
{  
int i = 1, n, S = 0;  
printf(" Enter any number to check Perfect Number \n");  
scanf("%d", &n);  
  
while(i < n )  
                     {  
                               if(n % i == 0)  
                               S = S + i;  
                               i++;  
                     }  
           if(S == n)  
                  printf("\n %d is Perfect Number", n);  
           else  
           printf("\n %d is not a Perfect Number", n);  
}   
