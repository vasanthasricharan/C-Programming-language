#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ar[n],a=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	int s;
	scanf("%d",&s);
	for(int i=0;i<n;i++){
		if(ar[i]==s){
			a=1;
			break;
		}
	}
	if(a==0){
		printf("Not Found");
	}
	else
	{
		printf("Element is found");
	}
}