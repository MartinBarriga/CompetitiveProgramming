#include<stdio.h>
int main()
{
	int mat[4][4],acum=0,j,i;
	for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&mat[i][j]);
	for(i=0;i<3;i++)
	{
		acum=0;
		for(j=0;j<3;j++)
		{
			acum+=mat[i][j];
		}
		if(acum!=15){
			printf("NO");
			return 0;
		}
	}
	////////////////////////////////////////
	for(j=0;j<3;j++)
	{
		acum=0;
		for(i=0;i<3;i++)
		{
			acum+=mat[i][j];
		}
		if(acum!=15){
			printf("NO");
			return 0;
		}
	}
	acum=0;
	for(i=0;i<3;i++) acum+=mat[i][i];
	if(acum!=15){
		printf("NO");
		return 0;
	}
	acum=0;
	for(i=0,j=2;i<3;i++,j--) acum+=mat[i][j];
	if(acum!=15){
		printf("NO");
		return 0;
	}
	printf("SI");
	return 0;
}