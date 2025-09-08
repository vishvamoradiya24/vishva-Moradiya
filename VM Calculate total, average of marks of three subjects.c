#include <stdio.h>

int main()
 {
    float marks1, marks2, marks3;
    float total, average;

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);

    total = marks1 + marks2 + marks3;
    average = total / 3;

    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    if (marks1 < 35 || marks2 < 35 || marks3 < 35)
     {
        printf("Result: Fail\n");
    }
     else
      {
       if (average >= 70)
            printf("Result: Distinction\n");
        else if (average >= 60)
            printf("Result: First Class\n");
        else if (average >= 50)
            printf("Result: Second Class\n");
        else if (average >= 35)
            printf("Result: Third Class\n");
        else
            printf("Result: Fail\n");
    }

    return 0;
}
