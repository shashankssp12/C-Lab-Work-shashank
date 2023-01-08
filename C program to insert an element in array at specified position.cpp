# include <stdio.h>
int  main( )
{
int  i, n, ele, pos ;
printf(" Enter the Numbers of elements: ") ;
scanf("%d ",& n) ;
int arr[n];
printf("\n Enter the elements of array : \n") ;
for (  i = 1 ; i <= n ; i++)
scanf("%d ",& arr[i]) ;
printf("\n Array enter by user are :\n") ;
for (  i = 1 ; i <= n ; i++)
printf("%d \t",arr[i]) ;

printf("\n Enter the position you want to enter :") ;
scanf("%d ",& pos) ;
printf("\n Enter the element you want to enter :") ;
scanf("%d ",& ele) ;

for (  i = 1 ; i <= n ; i++)
{
if ( i > pos )
arr[i] = arr[i-1] ;
else
{
if ( i == pos )
arr[i] = ele ;
else
arr[i] = arr[i] ;
}
}
printf("\n Array After Inserting element :\n") ;
for (  i = 1 ; i <= n ; i++){
printf("%d \t",arr[i]) ;
}
}
