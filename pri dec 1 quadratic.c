#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float x,y,imaginary;
	float D;
	printf("enter values of a,b,c of quadratic equation(a*x*x+b*x+c):");
	scanf("%f%f%f",&a,&b,&c);
	D=(b*b)-(4*a*c);
	if(D>0)
	{
		x=(-b+sqrt(D))/(2*a);
		y=(-b-sqrt(D))/(2*a);
		printf("two distant and real roots exists:%.2f and %.2f",x,y);
	}
	else if(D==0)
	{
		x=y=-b/(2*a);
		printf("two equal and real roots exists:%.2f and %.2f",x,y);
	}
	else if(D<0)
	{
		x=y=-b/(2*a);
		imaginary=sqrt(D)/(2*a);
		printf("two distinct complex roots exists:%.2f+i%.2f and %.2f-i%.2f",x,y,imaginary);
	}
	return 0;
}
