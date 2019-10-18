#include <stdio.h>
int main()
{
    char s[1000];
    int i;
    printf("Enter a string: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; ++i);
    printf("Length of string: %d", i);
    return 0;
}
//Output

Enter a string: Programiz
Length of string: 9