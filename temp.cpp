#include<iostream>
#include<queue>

using namespace std;
int ar[10000];
void sieve()
{
	for(int i=2;i<=100;i++)
	for(int j=2*i;j<=10000;j+=i)
		ar[j] = 1;
}

int main()
{

	sieve();
	for(int i=1000;i<10000;i++)
		if(!ar[i])
			cout<<i<<'\t';
	return 0;
}
