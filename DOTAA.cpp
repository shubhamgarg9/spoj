#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int d;
		for(int i=0;i<a;i++)
		{
			cin>>d;
			while(d>c)
			{
				d -= c;
				b--;
			}
		}
		if(b>0)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}
