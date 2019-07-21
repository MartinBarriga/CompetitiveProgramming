#include <iostream>
#include <stdlib.h>
using namespace std;

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}


int main()
{
	int x,y,i,goles, partidos,tam = 0, j=0, puntos=0;
	
	while(cin >> partidos)
	{
		cin >> goles;

		int *ar = (int *) malloc(tam * sizeof(int));
		for( i = 0; i < partidos; i++)
		{
			cin >> x >> y;
			tam++;
			ar = (int *) realloc(ar, tam * sizeof(int));
			ar[tam-1] = x-y; 
		}
		qsort(ar, tam, sizeof(int),cmpfunc);
		
		while(j < tam)
		{
			if(ar[j] > 0) puntos += 3;
			else {
					if(ar[j] == 0)
					{
						if(goles > 0)
						{
							goles--;
							puntos +=3;
						}
						else{
							puntos ++;
						}
						
					}
					else{
						if( (goles + ar[j]) > 0 )
						{
							goles += (ar[j] -1);
							puntos += 3; 
						}
						else if((goles + ar[j]) == 0 ){
							goles = 0;
							puntos ++;
						}

					}	
			}

			j++;
		}
		cout << puntos << endl;
		free(ar);
		tam = 0;
		puntos = 0;
		j = 0;
	}
	return 0;
}