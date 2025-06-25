#include<stdio.h>
float avg(float e,float d)
{
	float c;
	c=(e+d)/2;
	return c;
}
int main()
{
	float a,b,c;
	scanf("%f%f",&a,&b);
	c=avg(a,b);
	printf("%.2f",c);
}   