#include <stdio.h>

int main()
{
    float kgs, grams;
    printf("Enter weight in kilograms: ");
    scanf("%f", &kgs);
    grams = kgs * 1000;
    printf("%.2f kilograms is equal to %.2f grams.\n", kgs, grams);

    return 0;
}
