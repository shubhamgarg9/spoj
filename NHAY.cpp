#include<bits/stdc++.h>
using namespace std;
int main()
{
	string pat,text;
	int size;
	while(cin>>size)
	{
		cin>>pat>>text;
		int lps[size];
		int i=1,j=0;
		lps[0] = 0;
		while(i<pat.size())
		{
			if(pat[i]==pat[j])
			{
				j++;
				lps[i] = j;
				i++;
			}
			else
			{
				if(j>0)
					j = lps[j-1];
				else
				{
					lps[i] = 0;
					i++;
				}
			}
		}
		i=0; j=0;
		while(i<text.size())
		{
			if(text[i]==pat[j])
			{
				j++;
				i++;
			}
			if(j==pat.size())
			{
				cout<<i-pat.size()<<'\n';
				j = lps[j-1];
			}
			else if(i<text.size() && pat[j] != text[i])
			{
				if(j!=0)
					j = lps[j-1];
				else
					i++;
			}
		}
		cout<<'\n';
	}
	return 0;
}
