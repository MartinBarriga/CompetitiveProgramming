#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,x,y, i, m, sum = 0;
	cin >> n;
	int ar[n];
	for(i = 0; i < n; i++) ar[i] = 0;
	cin >> x;
	for(i = 0; i < x; i++)
	{
		cin >> m;
		if(ar[m-1] == 0)
		{
			ar[m-1] = 1;
			sum++;
		} 
	}
	cin >> x;
	for(i = 0; i < x; i++)
	{
		cin >> m;
		if(ar[m-1] == 0)
		{
			ar[m-1] = 1;
			sum++;
		} 
	}
	if(sum == n) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
	return 0;
}