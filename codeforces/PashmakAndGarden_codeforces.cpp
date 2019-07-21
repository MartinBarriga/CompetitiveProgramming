
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4, abs,absx,absy;
	cin >> x1 >> y1 >> x2 >> y2;
	if(x1 == x2)
	{
		abs = y2-y1;
		if(abs < 0) abs *= -1;
		if((x1 + abs <= 1000) && (x2 + abs <= 1000))
		{
			cout << (x1 + abs) << " " <<  y1 << " "  << (x2 + abs) << " " << y2 << endl;
		}
		else if((x1 - abs >= -1000) && (x2 - abs >= -1000))
		{
			cout << (x1 - abs) << " " <<  y1 << " "  << (x2 - abs) << " " << y2 << endl;
		}
		else cout << "-1" << endl;
	}
	else if(y1 == y2)
	{
		abs = x2-x1;
		if(abs < 0) abs *= -1;
		if((y1 + abs <= 1000) && (y2 + abs <= 1000))
		{
			cout << x1 << " " <<  (y1 + abs) << " "  << x2 << " " << (y2 + abs) << endl;
		}
		else if((y1 - abs >= -1000) && (y2 - abs >= -1000))
		{
			cout << x1 << " " <<  (y1 - abs) << " "  << x2 << " " << (y2 - abs) << endl;
		}
		else cout << "-1" << endl;
	}
	else {
		absx = x1 - x2;
		absy = y1 - y2;
		if(absx < 0) absx *= -1;
		if(absy < 0) absy *= -1;
		if( absx == absy)
		{
			cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
		}
		else cout << "-1" << endl;

	}
	return 0;
}