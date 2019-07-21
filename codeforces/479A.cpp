#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,x1,x2,x3,x4,x5,x6,mayor=-1;
	cin >> a >> b >> c;
	if(a*b+c > mayor) mayor = a*b+c;
	if(a+b*c > mayor) mayor = a+b*c;
	if(a+b+c > mayor) mayor = a+b+c;
	if((a+b)*c > mayor) mayor = (a+b)*c;
	if(a*(b+c) > mayor) mayor = a*(b+c);
	if(a*b*c > mayor) mayor = a*b*c;
	cout << mayor;
	return 0;
}
