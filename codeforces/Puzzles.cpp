#include <iostream>
using namespace std;


int main()
{
	int n, m, i, j, aux, res = 2000;
	cin >> n >> m;
	int ar[m];
	for (i = 0; i < m; i++) cin >> ar[i];
	for (i = 0; i < m-1; i++)
	{
		for(j = i+1; j < m; j++)
		{
			if( ar[j] > ar[i])
			{
				if( ((ar[j] - ar[i]) < res) && ((ar[j] - ar[i]) >= n) ) res = ar[j] - ar[i];
			}
			else {
				if( ((ar[i] - ar[j]) < res) && ((ar[i] - ar[j]) >= n) ) res = ar[i] - ar[j];
			}
		}
	}
	//for (i = 0; i < m; i++) cout << ar[i] << " "; 
	//for(i = 0; i < m-1; i++)
	//{
	//	if( ((ar[i+1] - ar[i]) < res) && ((ar[i+1] - ar[i]) >= n) ) res = ar[i+1] - ar[i];
	//}
	cout << res;
	return 0;
}