#include<iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	while(str!="0")
	{
		int flag = 1;
		int len = str.length();
		int ar[len],ans[len];
		for(int i=0;i<len;i++)
			ar[i] = str[i] - '0';
		ans[0] = 1;
		if(ar[1]==0)
		{
			if(ar[0]*10>26)
			{
				cout<<"0\n";
				cin>>str;
				continue;
			}
			else
				ans[1] = 1;	
		}
		else if(ar[2]==0)
		{
			if(ar[1]*10>26)
			{
				cout<<"0\n";
				cin>>str;
				continue;
			}
			else
				ans[1] = 1;
		}
		else
			ans[1] = ans[0] + (ar[0]*10+ar[1]<27 ? 1 : 0);

		for(int i=2;i<len;i++)
		{
			if(ar[i]==0)
			{
				if(ar[i-1]*10>26 || ar[i-1]==0)
				{
					cout<<"0\n";
					cin>>str;
					flag = 0;
					break;
				}
				else
					ans[i] = ans[i-1];
			}
			else if(i+1<len && ar[i+1]==0)
			{
				if(ar[i]*10>26)
				{
					cout<<"0\n";
					cin>>str;
					flag = 0;
					break;
				}
				else
					ans[i] = ans[i-1];
			}
			else if(ar[i-1]==0)
			{
				ans[i] = ans[i-1];
			}
			else
				ans[i] = ans[i-1] + (ar[i-1]*10+ar[i]<27?ans[i-2]:0);
		}
		if(flag==0)
			continue;
		cout<<ans[len-1]<<'\n';
		cin>>str;
	}
	return 0;
}
