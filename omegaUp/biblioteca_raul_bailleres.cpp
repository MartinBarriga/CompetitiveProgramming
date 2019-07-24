#include<stdio.h>
int main()
{
	int a=0,b=0,n,m,x,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x==0)
		{
			a++;
		}
		else {
			b++;
		}
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&x);
		if(x==0)
		{
			a++;
		}
		else {
			b++;
		}
	}
	printf("%d\n%d",a,b);
}
