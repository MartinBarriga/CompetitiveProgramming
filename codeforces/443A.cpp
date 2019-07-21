#include <iostream>
#include <string>
using namespace std;
int main()
{
	int ar[26], sum = 0, i;
	string cad;
	//cin >> cad;
	getline(cin, cad);
	//cout << cad;
	for(i = 0; i<26; i++) ar[i] = 0;
	for(i = 0; i < cad.size(); i++)
	{
		if(cad[i] >= 97 && cad[i] <=122) 
		{
			if( ar[cad[i]-97] == 0)
			{
				sum++;
				ar[cad[i]-97] = 1;
			}
		}
	}

	cout << sum;
	return 0;
}