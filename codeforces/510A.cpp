#include <iostream>
using namespace std;

int main()
{
	int n,m,sentido = 1;
	cin >> n >> m;
	for(int i = 0; i < n ; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(i %2 == 0 )
			{
				cout << "#";
				
			}
			else 
			{
				if( ((sentido == -1) && (j == (m-1))) )
				{ 
					
					cout << "#";
				}
				else if( ((sentido == 1) && (j == 0)) )
				{ 
					cout << "#";
				}

				else cout << ".";
			}
		}
		if(i%2 == 0)sentido *= -1;
		cout << endl;
	}
	return 0;
}