#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	while(a!=-1 && b!=-1)
	{
		int c,d;
		if(a<=b)
		{
			c = a;
			d = b;
		}
		else
		{
			c = b;
			d = a;
		}
		cout<<ceil(d*1.0/(c+1))<<'\n';
		cin>>a>>b;
	}
	return 0;
}
