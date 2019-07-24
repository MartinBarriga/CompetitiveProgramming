#include<stdio.h>
int main()
{
	int n,r,c=1,i;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)scanf("%d",&ar[i]);
	scanf("%d",&r);
	
	for(i=n-1;i>=0;i--)
	{
		if(ar[i]==r)
		{
			printf("%d",c);
			return 0;
		}
		c++;
	}
	printf("No existe el auto");
	return 0;
}