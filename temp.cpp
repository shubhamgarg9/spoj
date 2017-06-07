#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	for(int i=0;;i++)
	{
		if(pow(2,i)>=99000000)
		{
			cout<<i<<'\n';
			break;
		}
	}
	return 0;
}
