#include <stdio.h>
int main()
{
   char str[50],length = 0;
   int count= 1, i;
   printf("Enter the String\n");
   gets(str);
   for (i = 0;str[i]!='\0'; i++)
   {
      length++;
   }
 
   for (i = 0; i < length / 2; i++)
   {
      if (str[i] != str[length - 1 - i])
      {
         count = 0;
         break;
      }
   }
   if (count == 1)
      printf("%s is a palindrome.", str);
   else
      printf("%s is not a palindrome.", str);
}
