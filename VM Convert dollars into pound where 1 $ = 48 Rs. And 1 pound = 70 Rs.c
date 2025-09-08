#include <stdio.h>

int main()
{
    float dollars, pounds;
    float dollar_to_rs = 48.0;
    float pound_to_rs = 70.0;

    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    pounds = (dollars * dollar_to_rs) / pound_to_rs;
    printf("%.2f dollars is equal to %.2f pounds.\n", dollars, pounds);

    return 0;
}
