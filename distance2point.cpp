#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,X,Y,Distance;
	scanf("%lf%lf%lf%lf",&x,&y,&X,&Y);
	Distance = sqrt((pow(X-x, 2))+(pow(Y-y, 2)));
	printf("%.4lf",Distance);
	return 0;
}
