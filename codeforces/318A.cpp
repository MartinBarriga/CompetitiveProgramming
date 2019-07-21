#include <iostream>
using namespace std;

int main()
{
	long long x ,y, r;
	cin >> y >> x;

	if( (y % 2 == 0 && x <= y/2 ) || (y %2 != 0 && x <= (y/2 +1)))
	{
		r = x*2 -1;
	}
	else
	{
		if( y%2 != 0) r = (x - (y/2 +1)) *2 ;
		else r = (x - y/2 ) *2 ;
	} 
	cout << r;
	return 0;
}