#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		string str,str2;
		cin>>str;
		str2 = str;
		reverse(str2.begin(),str2.end());
		int l = str.size();
		str = '1' + str;
		str2 = '2' + str2;
	
		int ar[l+1][l+1];
		for(int i=0;i<=l;i++)
		{
			ar[0][i] = 0;
			ar[i][0] = 0;
		}
		for(int i=1;i<=l;i++)
		for(int j=1;j<=l;j++)
		{
			if(str2[i] == str[j])
				ar[i][j] = ar[i-1][j-1] + 1;
			else
				ar[i][j] = max(ar[i-1][j],ar[i][j-1]);
		}
		cout<< l - ar[l][l]<<'\n';		
	}
	return 0;
}
