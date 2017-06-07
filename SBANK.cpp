#include<iostream>
#include<map>
using namespace std;

typedef pair<string, int> P;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		map<string,int> ac;
		int n;
		scanf("%d\n",&n);
		char str[40];
		for(int i=0;i<n;i++)
		{
			gets(str);
			ac[(string)str]++;
		}
		for(map<string,int>::iterator j=ac.begin(); j!=ac.end(); j++)
			cout<<j->first<<' '<<j->second<<'\n';
		cout<<'\n';
	}
	return 0;
}
