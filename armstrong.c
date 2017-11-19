# include <stdio.h>
int main()
{
int num,temp,digit,sum=0;
scanf("%d",&num);
while(num>1)
{
temp=num;
digit=num%10;
sum=sum+digit*digit*digit;
num=num/10;
}
if(sum==num)
printf("Armstrong no");
else 
printf("not armstrong  no");
return 0;
}
