#include<stdio.h>
int fun(int n)
{
	int i,sum=0,d,x;
	for(i=1;i<=n;i++)
	{
		x=i;
		if(x<10)d=1;
		else if(x>9&&x<100)d=2;
		else if(x>99&&x<1000)d=3;
		else if(x>999&&x<10000)d=4;
		else if(x>9999&&x<100000)d=5;
		else if(x>99999&&x<1000000)d=6;
		else if(x>999999&&x<10000000)d=7;
		else if(x>9999999&&x<100000000)d=8;
		else d=9;
		sum+=d;
	}
	return sum;
}
int main()
{
	int n,r;
	scanf("%d",&n);
	r=fun(n);
	printf("%d\n",r);
}