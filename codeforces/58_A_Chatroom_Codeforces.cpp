#include <iostream>
#include <string>
using namespace std;
int main()
{
	int h = 0, e = 0, l = 0, o = 0, i, sum;
	string pal;
	cin >> pal;
	for(i = 0; i < pal.size(); i++ ) 
	{
		if(h > 0)
		{
			if(e > 0)
			{
				if(l > 1)
				{
					if(pal[i] == 'o') o++;
				}
				else
				{
					if(pal[i] == 'l') l++;
				}
			}
			else 
			{
				if(pal[i] == 'e') e++;
			}
		}
		else 
		{
			if(pal[i] == 'h') h++;
		}

	}
	if(o > 0) cout << "YES";
	else cout << "NO";
	
	return 0;
}