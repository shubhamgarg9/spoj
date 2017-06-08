#include<iostream>
using namespace std;
int main()
{
	int ar[8] = {1,5,4,2,6,5,3,2};
	int t = ar[0];
	for(int i=1;i<8;i++)
	{
		t = t^ar[i];
		cout<<t<<'\n';
	}
	return 0;
}
