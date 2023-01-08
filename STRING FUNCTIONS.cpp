# include <stdio.h>
# include <string.h>
int main()
{
char string1[40], string2[40] ;
printf("Enter the first string : \n\n") ;
gets(string1) ;
printf("\nEnter the second string : \n\n") ;
gets(string2) ;
printf("\nString 1 = %s & String 2 = %s ", string1, string2) ;

printf("- Length is : %d and %d", strlen(string1), strlen(string2)) ;

printf("\n\nString 1 = %s & String 2 = %s ", string1, string2) ;

printf("- Uppercase is : %s and %s", strupr(string1), strupr(string2));

printf("\n\nString 1 = %s & String 2 = %s ", string1, string2) ;

printf("- Lowercase is : %s and %s", strlwr(string1), strlwr(string2));

printf("\n\nString 1 = %s & String 2 = %s ", string1, string2) ;

printf("- Reverse is : %s and %s", strrev(string1), strrev(string2)) ;

printf("\n\nString 1 = %s & String 2 = %s ", string1, string2) ;

printf("- String copy is : %s ", strcpy(string1,string2));

printf("\n\nString 1 = %s & String 2 = %s ", string1, string2) ;

printf("- Concatenation is : %s ", strcat(string1,string2));

printf("\n\nString 1 = %s & String 2 = %s ", string1, string2) ;
}

