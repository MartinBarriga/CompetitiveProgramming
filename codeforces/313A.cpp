#include <iostream>
using namespace std;

int main()
{
	long n ;
	int x, y;
	cin >> n;
	if(n > 0) cout << n;
	else {
		x= (n%100)/10;
		y = n%10;
		if(x < y)
		{
			n = (n /100) * 10 + y;
		}
		else
		{
			n = n/10;
		}
		cout << n;

	}

	return 0;
}