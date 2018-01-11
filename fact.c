#include<stdio.h>
int main()
{
int num,fact=1,i;
scanf("%d",&num);
for(i=num;i>0;i--)
{
fact*=i;
}
printf("Factorial  of num %d is %d",num,fact);
return 0;
}
