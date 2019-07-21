#include <iostream>
using namespace std;


int menor(int n, int m)
{
	if(n < m) return n;
	else return m;
}

int main()
{
	int n, m, x;
	cin >> n >> m;
	x = menor(n,m);
	if(x % 2 == 0) cout << "Malvika";
	else cout << "Akshat";
	return 0;
}

