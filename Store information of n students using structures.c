#include <stdio.h>
#include<stdlib.h>
struct course
{
   int marks;
   char subject[30];
};
int main()
{
   struct course *ptr;
   int i, noOfRecords;
   printf("Enter number of records: ");
   scanf("%d", &noOfRecords);
   // Allocates the memory for noOfRecords structures with pointer ptr pointing to the base address.
   ptr = (struct course*) malloc (noOfRecords * sizeof(struct course));
   for(i = 0; i < noOfRecords; ++i)
   {
       printf("Enter name of the subject and marks respectively:\n");
       scanf("%s %d", &(ptr+i)->subject, &(ptr+i)->marks);
   }
   printf("Displaying Information:\n");
   for(i = 0; i < noOfRecords ; ++i)
       printf("%s\t%d\n", (ptr+i)->subject, (ptr+i)->marks);
   return 0;
}
Output

Enter number of records: 2
Enter name of the subject and marks respectively:
Programming
22
Enter name of the subject and marks respectively:
Structure
33

Displaying Information:
Programming      22
Structure        33