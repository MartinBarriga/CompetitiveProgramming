#include <iostream>
using namespace std;
int main()
{
	int i, j, x, y, basura, suma;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			cin >> basura;
			if( basura == 1)
			{
				x = i - 2;
				y = j - 2;
				if(x < 0) x *= -1;
				if(y < 0) y *= -1;
				suma = x + y; 
				cout << suma;
				return 0;
			}
		}
	}
	return 0;
}