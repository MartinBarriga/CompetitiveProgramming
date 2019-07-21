#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n,m, aux, i,j, mayor = 10000;
	cin >> m >> n;
	int ar[n];
	for(i = 0; i < n; i++) cin >> ar[i];
	for(i=0; i<n; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if (ar[j] > ar[i])
			{
				aux = ar[i];
				ar[i] = ar[j];
				ar[j] = aux; 
			}
		}
	}
	//for(i = 0; i < n; i++) cout << ar[i] << " ";
	for(i = 0; i<=n-m; i++)
	{
		if(mayor > ar[i] - ar[i+m-1]) mayor = ar[i] - ar[i+m-1];
	}
	cout << mayor;
	return 0;
}