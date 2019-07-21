#include <iostream>
using namespace std;
int main()
{
	int n,k,cont = 0, equipos = 0;
	cin >> n >> k;
	int ar[n];
	for(int i = 0; i < n; i++)
	{
		cin >> ar[i];
		if(ar[i] + k <= 5)
		{
			cont++;
			if(cont == 3)
			{
				cont = 0;
				equipos++;
			}
		}
	}
	cout << equipos<<endl;
	return 0;
}