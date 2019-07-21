#include <stdio.h>

void acomoda(int *, int *, int *, int *);
void valor(int *, int *, int *, int *);

int main()
{
	int x1,x2,y1,y2;
	scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
	acomoda(&x1,&y1,&x2,&y2);
	valor(&x1,&y1,&x2,&y2)
	return 0;
}

void acomoda(int *x1, int *y1, int *x2, int *y2)
{
	int distancia;
	if(x1 == x2)
	{ 
		distancia = y2 - y1;

	}
	else if(y1 == y2)
	{
		
	}
	else{
		
	}	
}

void acomoda(int *x1, int *y1, int *x2, int *y2)
{
	int aux;
	if(x1 == x2)
	{ 
		if(y2 < y1)
		{
			aux = y2;
			y2 = y1;
			y1 = aux;
		}

	}
	else if(y1 == y2)
	{
		if(x2 < x1)
		{
			aux = x2;
			x2 = x1;
			x1 = aux;
		}
	}
	else{
		if(x2 < x1)
		{
			aux = x2;
			x2 = x1;
			x1 = aux;
			aux = y2;
			y2 = y1;
			y1 = aux;
		}

	}	
}