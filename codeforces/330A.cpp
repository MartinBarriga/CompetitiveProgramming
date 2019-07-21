#include <iostream>
using namespace std;
int main()
{
	int i,j,n,m, piedra = 0,cont = 0;
	cin >> n >> m;
	char ar[n][m];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			cin >> ar[i][j];
		}
	}

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if(ar[i][j] == 'S') piedra = 1;
		}
		if(piedra == 0)
		{
			for(j = 0; j < m; j++)
			{
				if(ar[i][j] == '.') {
					ar[i][j] = '0';
					cont++;
				}
			}
		}
		piedra = 0;
	}
	for(j = 0; j < m; j++)
	{
		for(i = 0; i < n; i++)
		{
			if(ar[i][j] == 'S') piedra = 1;
		}
		if(piedra == 0)
		{
			for(i = 0; i < n; i++)
			{
				if(ar[i][j] == '.') {
					ar[i][j] = '0';
					cont++;
				}
			}
		}
		piedra = 0;
	}
	cout << cont;
}