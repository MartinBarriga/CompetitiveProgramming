#include <iostream>
#include <string>
using namespace std;

int main (void)
{ 
	string cad;
	int i, uno=0, dos=0, tres=0, j=0;
	cin >> cad;
	for(i = 0;i < cad.size(); i+=2) 
	{
		if(cad[i] == '1') uno++;
		if(cad[i] == '2') dos++;
		if(cad[i] == '3') tres++;
	}
	if(uno > 0) 
	{
		cout << "1";
		uno--;
	}
	else if (dos > 0)
	{
		cout << "2";
		dos--;
	}
	else if(tres > 0)
	{
		cout << "3";
		tres--;
	}
	for(i = 0; i < uno; i++) cout << "+1";
	for(i = 0; i < dos; i++) cout << "+2";
	for(i = 0; i < tres; i++) cout << "+3";

	return 0;
}
