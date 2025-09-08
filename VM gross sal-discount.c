#include<stdio.h>
#include<conio.h>
void main()
{
 float gross,net,discount;
 printf("Enter gross sales:");
 scanf("%f",& gross);
 if(gross>20000)
 {
 discount=0.15*gross;
 }
 else if(gross>10000)
 {
 discount=0.10*gross;
 }
 else
 {
 discount=0.05*gross;
 }
 net=gross-discount;
 printf("Net sales=%2f",net);
 getch();
}
