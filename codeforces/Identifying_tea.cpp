#include <iostream>

using namespace std;

int main()
{
	int n,i,res,correctos;
	char r;
	cin >> n;
	while(cin.eof() == 0)
	{
		
		correctos = 0;
		for(i = 0 ; i < 5; i++)
		{
			cin >> res;
			if(res == n) correctos++;
		}
		cout << correctos << endl;
		cin >> n;
	}
	return 0;
}