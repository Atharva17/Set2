#include<stdio.h>
int main()
{
int num,temp,digit,sum=0;
scanf("%d",&num);
temp=num;
while(temp!=0)
{
digit=temp%10;
sum=sum+digit*digit*digit;
temp=temp/10;
}
if(num==sum)
printf("Armstrong no");
else 
printf("not armstrong  no");
return 0;
}
