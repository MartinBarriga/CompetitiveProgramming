#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main()
{
	int n, bandera = 0;
	do {
		cin >> n;
		if((bandera == 0) && (n != 42)) cout << n << endl;
		else if( n == 42) bandera = 1;
	}while( getchar()!= EOF);
	return 0;
} 