#include <iostream>
using namespace std;
int main()
{
	int a,b, pwr, pos, sum = 0,j=0;
	cin >> a >> b;
	int ar[b], arp[b];
	for(int i = 0; i < b ; i++)
	{
		cin >> pwr >> pos;
		ar[i] = pwr;
		arp[i] = pos;
		
	}
	do{
		if( (a > ar[j]) && (ar[j] > 0))
		{
			a += arp[j];
			ar[j] = 0;
			j = -1;
			sum++;
		}
		j++;
	}while(j  < b);
	if( sum == b ) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}