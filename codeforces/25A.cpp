#include <iostream>
using namespace std;
int main()
{
	int n, par = 0, impar = 0,i;
	cin >> n;
	int ar[n];
	for(i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	if( ar[0]%2 == 0 ) par++;
	else impar++;
	if( ar[1]%2 == 0 ) par++;
	else impar++;
	if( ar[2]%2 == 0 ) par++;
	else impar++;
	for(i =0; i < n; i++)
	{
		if(ar[i] %2 != 0 && par >= 2) cout << i+1 << endl;
		if(ar[i] %2 ==0 && impar >= 2) cout << i+1 << endl;
	}
	return 0;
}