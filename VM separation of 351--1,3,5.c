#include<stdio.h>
int main()
{
 int number;
 printf("Enter a number:");
 scanf("%d",&number);
 printf("The digits are:");
 while(number>0)
 {
  int digit=number%10;
  printf("%d",digit);
  number=number/10;
  if(number>0)
  {
   printf(",");
   }
  }
  printf("\n");
  return 0;
}
