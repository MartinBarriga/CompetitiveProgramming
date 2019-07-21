#include <iostream>
using namespace std;

int suma()
{
	int a, b, c;
	cin >> a >> b >> c;
	return (a+b+c);
}

int main()
{
	int i, n, a, b, c, ta = 0, tb = 0, tc = 0;
	cin >> n;
	for(i = 0; i < n; i++)
	{

		cin >> a >> b >> c;
		ta += a;
		tb += b;
		tc += c;

	}
	if (ta == 0 && tb == 0 && tc == 0) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
