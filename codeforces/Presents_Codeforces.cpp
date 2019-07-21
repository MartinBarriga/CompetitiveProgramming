#include <iostream>

using namespace std;

int main()
{
	int n,i;
	cin >> n;
	int ar[n], ar2[n];
	for(i = 0; i < n; i++)
	{
		cin >> ar[i];
		ar2[ar[i] -1] = i+1;
	}
	for(i = 0; i < n; i++)
	{
		cout << ar2[i] << " ";
	}
	cout << "\n";
	return 0;
}