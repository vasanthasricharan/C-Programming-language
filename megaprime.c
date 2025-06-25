#include<stdio.h>
int prime(int a)
{
	int c;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			c++;
		}
	}
	if(c==2){
		return 1;
	}
	else{
		return 0;
	}
}
int mega(int a)
{
	int rem,rev=0;
	int temp=a;
	while(a>0){
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	if(temp==rev){
		return 1;
	}
	else{
		return 0;
	}
}
void main()
{
	int a;
	scanf("%d",&a);
	if(a!=0 && mega(a)==mega(a)){
		printf("MEGA PRIME");
	}
	else{
		printf("NOT MEGA PRIME");
	}
}