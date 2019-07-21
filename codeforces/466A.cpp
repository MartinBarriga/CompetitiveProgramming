#include <iostream>
using namespace std;

int main()
{
	int viajes, pack, unviaje, costopack, i, j, costofinal = 1000000;
	cin >> viajes >> pack >> unviaje >> costopack;
	for( i = 0; i <= viajes; i++)
	{
		for( j = 0; j <= viajes; j++)
		{
			if((i*unviaje + j*costopack < costofinal) && (i*unviaje + j*costopack != 0) && (i + j*pack >= viajes)) costofinal = i*unviaje + j*costopack;
		}
	}
	cout << costofinal;
	return 0;
}