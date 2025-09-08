#include <stdio.h>

int main()
{
    double bytes, kb, mb, gb;
    printf("Enter the number of bytes: ");
    scanf("%lf", &bytes);

    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;

    printf("In Kilobytes: %.2lf KB\n", kb);
    printf("In Megabytes: %.2lf MB\n", mb);
    printf("In Gigabytes: %.2lf GB\n", gb);

    return 0;
}
