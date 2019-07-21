#include <iostream>
using namespace std;

int main()
{
	int n,d,res=0,sum=0;
	cin >> n >> d;
	int ar[n];
	for(int i = 0; i  < n; i++)
	{
		cin >> ar[i];
		sum +=ar[i];
	}
	if((sum + (n-1)*10 )> d) 
	{
		cout << "-1" << endl;
	}
	else{
		res = (n-1) * 2;
		sum  += ((n-1) *10);
		while(sum < d)
		{
			sum+=5;
			if(sum <= d) res++;
		}
		cout << res << endl;
	}
	return 0;
}