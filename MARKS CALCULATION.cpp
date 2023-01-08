#include <stdio.h>
 
int main()
{
    int eng, phy, chem, math, comp; 
    int total, average, per,perc;
 
    printf("ENTER THE MARKS IN ENGLISH");
    scanf("%d",&eng);
     printf("ENTER THE MARKS IN PHY");
      scanf("%d",&phy);
      printf("ENTER THE MARKS IN CHEM");
       scanf("%d",&chem);
       printf("ENTER THE MARKS IN MATH");
        scanf("%d",&math);
        printf("ENTER THE MARKS IN COMP");
         scanf("%d",&comp);
 
    total = eng + phy + chem + math + comp;
    average = total / 5;
    per = total/500;
    perc=per*100;
 
    printf("Total marks = %d\n", total);
    printf("Average marks = %d\n", average);
    printf("Percentage = %d", perc);
 
    return 0;
}
