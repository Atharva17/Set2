#include<stdio.h>
int main()
{
	int first,last,num,temp,digit,sum;
            scanf("%d",&first);
            scanf("%d",&last);
	for(num=first;num<last;++num)
	{ 
	temp=num;
	sum=0;
	while(temp!=0)
	{
		digit=temp%10;
		sum+=digit*digit*digit;
		temp/=10;
		
	}
	if(sum==num)
	printf(" %d",num);
	}
	return 0;
}
