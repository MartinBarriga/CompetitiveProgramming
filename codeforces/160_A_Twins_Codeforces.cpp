#include <iostream>

using namespace std;

int main()
{
	int n,i,j,aux,sum = 0, robo=  0, monedas = 0;
	cin >> n;
	int ar[n];
	for(i = 0; i < n; i++) 
	{
		cin >> ar[i];
		sum += ar[i];
	}
	sum /= 2;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(ar[i] > ar[j])
			{
				aux = ar[i];
				ar[i] = ar[j];
				ar[j] = aux;
			}
		}
	}
	i=0;
	while (robo <= sum) 
	{
		robo+=ar[i];
		monedas++;
		i++;
	}
	cout << monedas;
	return 0;
}