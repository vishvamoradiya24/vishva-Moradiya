#include<stdio.h>
int main()
{
 int n,sum=0;
 printf("Enter a positive number n:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
  sum+=i;;
 }
 printf("sum of first %d natural number is:%d\n",n,sum);
 return 0;
}
