#include <stdio.h>
struct Distance
{
    int feet;
    float inch;
} d1, d2, sumOfDistances;
int main()
{
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);
    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);
    sumOfDistances.feet = d1.feet+d2.feet;
    sumOfDistances.inch = d1.inch+d2.inch;
    // If inch is greater than 12, changing it to feet.
    if (sumOfDistances.inch>12.0)
    {
        sumOfDistances.inch = sumOfDistances.inch-12.0;
        ++sumOfDistances.feet;
    }
    printf("\nSum of distances = %d\'-%.1f\"",sumOfDistances.feet, sumOfDistances.inch);
    return 0;
}
Output

Enter information for 1st distance
Enter feet: 23
Enter inch: 8.6

Enter information for 2nd distance
Enter feet: 34
Enter inch: 2.4

Sum of distances = 57'-11.0"