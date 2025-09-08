#include <stdio.h>

int main()
{
    int minutes;
    float hours;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60.0;
    printf("%d minutes is equal to %.2f hours.\n", minutes, hours);

    return 0;
}
