#include<stdio.h>
int palin(int a)
{
	int n,rev=0,r;
	  while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
return rev;
}
int next_prime(int a)
{   int j,k,d;
	for(j=a+1;;j++)
	{  int c=0;
		for(k=1;k<=j;k++)
		{
			if(j%k==0)
			{  
				c++;
			}
		}if(c==2)
		{  
		  break;
		}
	} return j;
}
int previous_prime(int a)
{   int i,j,d;
	for(i=a-1;;i--)
	{  int c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{  
				c++;
			}
		}if(c==2)
		{  
		  break;
		}
	} return i;
}
int main()
{
	int a;
	scanf("%d",&a);
	int p,q,s;
    p=next_prime(a);
    q=previous_prime(a);
    if(p-a==a-q)
    {
    	printf("%d %d",p,q);
	}
   else 
   {
   	 s=(p-a<a-q)?p:q;
   	 printf("%d\n",s);
   }
   	int d,f,rev;
	d=palin(a);
	if(d==rev){
		printf("no palin\n");
	}
	else{
		printf("Palin\n");
	}
}
