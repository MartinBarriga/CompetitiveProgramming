#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i;
	char sum;
	string cad;
	string cad2;
	cin >> cad;
	for(i = 0; i < cad.size(); i++)
	{
		if( (cad[i] != 'A' ) && (cad[i] != 'E') && (cad[i] != 'I') && (cad[i] != 'O') && (cad[i] != 'U') && (cad[i] != 'Y') && (cad[i] != 'a') && (cad[i] != 'e') && (cad[i] != 'i') && (cad[i] != 'o') && (cad[i] != 'u') && (cad[i] != 'y'))
		{
			cad2 = cad2 + '.';
			if(cad[i] > 64 && cad[i] < 91 )
			{ 
				sum= cad[i]+ 32;
				cad2 = cad2 + sum;
			}
			else cad2 = cad2 + cad[i]; 
		}
	}
	cout << cad2 ;
	cout << "\n";
	return 0;
}