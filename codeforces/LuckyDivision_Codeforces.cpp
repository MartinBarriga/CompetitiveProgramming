#include <iostream>
using namespace std;
int revisa(int a);
int main()
{
	int n,x,i;
	cin >> n;
	for(i = 4; i <=n; i++)
	{
		if(n%i == 0)
		{
			x = revisa(i);
			if(x == 1)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;

}

int revisa(int a)
{
	int b;
	while( a>0 )
	{
		b =  a % 10;
		if( b != 4 && b!= 7 ) return 0;
		a /= 10;
	}
	return 1;
}