#include <iostream>
using namespace std;
int main()
{
	int cantidad1=0,cantidad2=0,cantidad3=0,n,x,equipos=0, total = 0,menor;
	cin >> n;
	int ar1[n], ar2[n], ar3[n];
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(x == 1)
		{
			ar1[cantidad1] = i+1;
			cantidad1++;
		}
		else if(x == 2)
		{
			ar2[cantidad2] = i+1;
			cantidad2++;
		}
		else if(x==3)
		{
			ar3[cantidad3] = i+1;
			cantidad3++;
		}
	}
	if(cantidad1 > cantidad2) menor = cantidad2;
	else menor = cantidad1;
	if(menor > cantidad3) menor = cantidad3;
	cout << menor << endl;
	while((cantidad1 > 0) && (cantidad2 >0) && (cantidad3>0 ))
	{
		cout << ar1[cantidad1-1]<< " ";
		cout << ar2[cantidad2-1]<< " ";
		cout << ar3[cantidad3-1] << " " << endl;
		cantidad1--;
		cantidad2--;
		cantidad3--;
		total++;
	}
	return 0;
}