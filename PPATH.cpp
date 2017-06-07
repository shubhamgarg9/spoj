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


int ar_to_num(int *arr)
{
	int n = 0;
	for(int i=0;i<4;i++)
		n = n*10 + arr[i];
	return n;
}

int *num_to_ar(int n)
{
	int *arr = new int[4];
	int i = 3;
	while(n>0)
	{
		arr[i--] = n % 10 ;
		n = n/10;
	}
	return arr;
}

int main()
{

	sieve();
	int test;
	cin>>test;
	while(test--)
	{	
		int val[10000];
		fill_n(val,10000,INT_MAX);
		int a,b;
		cin>>a>>b;
		queue<int> q;
		q.push(a);
		val[a] = 0;
		while(!q.empty())
		{
			int top = q.front();
			q.pop();

			for(int i=0;i<4;i++)
			{
				int *arr = num_to_ar(top);
				for(int j=0;j<10;j++)
				{	
					arr[i] = j;
					int temp = ar_to_num(arr);	
					if(!ar[temp] && temp>=1000 && val[temp] == INT_MAX)
					{
						val[temp] = val[top] + 1;
						q.push(temp);
					}
				}
			}
		}
		if(val[b]!=INT_MAX)
			cout<<val[b]<<'\n';
		else
			cout<<"Impossible\n";
	}
	return 0;
}
