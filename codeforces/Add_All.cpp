#include <iostream>
#include <stdlib.h>
using namespace std;

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void resolver(int *ar, int n) {
	int costo = ar[0], totalCosto=0;
	for(int i = 0; i < (n-1); i++)
	{
		costo += ar[i+1];
		totalCosto += costo;
	}
	cout << totalCosto << endl;
}

int main()
{
	int i,n, costo, totalCosto;
	int ar[5000];
	cin >> n;
	while(n != 0) {
		
	
		totalCosto = 0;
		for( i =0; i < n; i++)
		{
			cin >> ar[i];
		}
		qsort(ar, n, sizeof(int),cmpfunc);

		resolver(ar,n);

		cin >> n;
	}

	return 0;
}