#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> x1 >> y1 >> x2 >> y2;
	for(x3 = -100; x3 <= 100; x3++)
	{
		for(y3 = -100; y3 <= 100; y3++)
		{
			for(x4 = -100; x4 <= 100; x4++)
			{	

				for(y4 = -100; y4 <= 100; y4++)

				{
					if( x2 == x1 && x3 != x2)
					{ 
						if(x4 == x3 && y2==y4 && y1 == y3 &&  (abs(x4-x2) == abs(y2 - y3)) ) { cout << x3 << " " << y3 << " " << x4 << " " << y4; return 0;}
					}
					if( y1 == y2 && y3!= y2)
					{
						if(y3 == y4 && x1 == x4 && x2 == x3 && (abs(y1 - y3) == abs(x2 - x1)) ){ cout << x3 << " " << y3 << " " << x4 << " " << y4; return 0;}
						
					}
					if( y1 != y2 && x2 != x1)
					{
						if(x1 == x3 && y1 == y3 && x2 == x4 && y2 == y4 && (abs(x1-x2) == abs(y2-y3)) && (x3 != x1 && y3 != y1) ){ cout << x3 << " " << y3 << " " << x4 << " " << y4; return 0;}
					}
					
				}
			}	
		}
	}
	cout << "-1";
	return 0;
}