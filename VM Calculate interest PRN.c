#include <stdio.h>

int main()
 {
    float P, R, N, I;
    printf("Enter principal amount: ");
    scanf("%f", &P);

    printf("Enter rate of interest: ");
    scanf("%f", &R);

    printf("Enter number of years: ");
    scanf("%f", &N);

    I = (P * R * N) / 100;

    printf("Simple Interest = %.2f\n", I);

    return 0;
}
