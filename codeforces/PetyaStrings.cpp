#include <iostream>
#include <string>

using namespace std;
int main()
{
	int i;
	string cad,cad2;
	cin >> cad;
	cin >> cad2;
	for(i = 0; i < cad.size(); i++)
	{
		if(cad[i] < 97) cad[i] += 32;
		if(cad2[i] < 97) cad2[i] += 32;
		if(cad[i] < cad2[i])
		{ 
			cout << "-1";
			return 0;
		}
		else if(cad[i] > cad2[i])
		{
			cout << "1";
			return 0;
		}
	}
	cout << "0";
	return 0;
}