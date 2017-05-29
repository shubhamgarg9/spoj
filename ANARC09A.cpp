#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int test=0;
	while(str[0]!='-')
	{
		test++;
		int o=0,c=0;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='{')
				o++;
			else if(str[i]=='}' && o>0)
				o--;
			else
				c++;
		}
		int ans = c/2;
		if(c%2!=0)
		{
			ans += 2;
			o--;	
		}
		ans += o/2;
		cout<<test<<". "<<ans<<'\n';
		cin>>str;
	}
	return 0;
}
