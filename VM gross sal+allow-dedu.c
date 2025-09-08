#include<stdio.h>
#include<conio.h>
void main()
{
 float GS,NS;
 printf("Enter your gross salary:");
 scanf("%f",&GS);
 if(GS>10000)
 {
 NS=GS+GS*(10/100)-GS*(3/100);
 printf("Net salary is %f",NS);
 }
 else if(GS>5000)
 {
 NS=GS+GS*(7/100)-GS*(2/100);
 printf("Net salary is %f",NS);
 }
 getch();
 }
