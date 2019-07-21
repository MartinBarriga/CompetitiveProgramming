#include <iostream>

using namespace std;
int main()
{
	int n, d,variable = 0, c,s,contador =0;
	cin >> n >> d;
	int res[n];
	for(int i = 0; i < n ; i++)
	{
		cin >> s;
		for(int j = 0; j < s; j++)
		{
			cin >> c;
			if( c < d) variable = 1;
		}
		if(variable == 1) 
		{
			
			res[contador] = i+1;
			contador++;
		
		}
		variable = 0;
	}	
	cout << contador << endl;
	for(int i = 0; i < contador; i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;
	return 0;
}