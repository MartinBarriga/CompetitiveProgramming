#include <iostream>
using namespace std;

int main()
{
	int n, i, z=0, menor = 101, mayor = 0, caminomay, caminomen, camino, posmen;
	cin >> n;
	int ar[n];
	for(i = 0; i < n; i++)
	{
		cin >> ar[i];
		if(ar[i] <= menor)
		{ 
			menor = ar[i];
			caminomen = n - i - 1;
			posmen = i;
		}
		if(ar[i] > mayor) 
		{
			mayor = ar[i];
			caminomay = i;
		}
	}
	if( caminomay > posmen) z = -1;

	camino = caminomay + caminomen + z;
	cout << camino;
	return 0;
}