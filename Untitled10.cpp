#include <stdio.h>
int main() {
    char str[100], c;
    int count = 0;
    printf("Enter a string");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &c);
    for (int i = 0; str[i] != '\0'; ++i) {
        if (c== str[i])
            ++count;
    }
    printf("Frequency of %c = %d",c,count);
}
