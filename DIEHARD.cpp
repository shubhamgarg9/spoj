#include<bits/stdc++.h>
using namespace std;
int ar[2501][2501];


int f(int h,int a,int s)
{
	if(h<=0 || a<=0)
		return 0;
	if(ar[h][a]!=-1)
		return ar[h][a];
	
	if(s==1)
		ar[h][a] = 1+max(f(h-5,a-10,2),f(h-20,a+5,3));
	if(s==2)
		ar[h][a] = 1+max(f(h+3,a+2,1),f(h-20,a+5,3));
	if(s==3)
		ar[h][a] = 1+max(f(h-5,a-10,2),f(h+3,a+2,1));
		
	return ar[h][a];
}

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		memset(ar,-1,sizeof ar);
		int h,a;
		cin>>h>>a;
//		cout<<max(max(f(h-5,a-10,2),f(h+3,a+2,1)),f(h+3,a+2,1))<<'\n';
		cout<<f(h+3,a+2,1)<<'\n';
	}
	return 0;
}
