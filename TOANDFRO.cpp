#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int col;
	string str;
	cin>>col;
	while(col!=0)
	{
		string ans="";
		cin>>str;
		for(int i=0;i<col;i++)
		{
			int j=i,flag=0;
			while(j<str.length())
			{
				ans += str[j];
				if(flag==0)
				{
					j = j+2*col-2*i-1;
					flag = 1;
				}
				else
				{
					j = j+2*i+1;
					flag=0;
				}
			}
		}
		cout<<ans<<'\n';
		cin>>col;
	}
	return 0;
}
