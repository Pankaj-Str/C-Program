Example: Find the Frequency of Characters
#include <stdio.h>
int main()
{
   char str[1000], ch;
   int i, frequency = 0;
   printf("Enter a string: ");
   gets(str);
   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch);
   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }
   printf("Frequency of %c = %d", ch, frequency);
   return 0;
}
Output

Enter a string: This website is awesome.
Enter a character to find the frequency: e
Frequency of e = 4