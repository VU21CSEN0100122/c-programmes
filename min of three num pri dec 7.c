#include<stdio.h>
int main()
{
	int a,b,c,min;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if((a<b)&&(b<c))
	{
		min=a;
	}
	else if((b<c)&&(b<a))
	{
		min=b;
	}
	else if((c<a)&&(c<b))
	{
		min=c;
	}
	printf("minimum among all three numbers=%d",min);
}
