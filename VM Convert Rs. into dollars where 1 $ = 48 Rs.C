#include <stdio.h>

int main()
{
    float rupees, dollars;
    printf("Enter amount in Rs: ");
    scanf("%f", &rupees);
    dollars = rupees / 48.0;
    printf("Equivalent amount in dollars: $%.2f\n", dollars);

    return 0;
}
