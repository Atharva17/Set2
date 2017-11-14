
#include<stdio.h>
int main()
{
int start,end,i;
scanf("%d%d",&start,&end);
for(i=start;i<end;i++)
{
if(i%2==1)
printf("%d\n",i);
}return 0;
}
