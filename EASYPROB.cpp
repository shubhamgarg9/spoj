#include<bits/stdc++.h>
using namespace std;

string func(int n)
{
	if(n==0)
		return "0";
	if(n==1)
		return "";
		
	int count = 0;
	string ans = "",temp;
	
	while(n>0)
	{
		if(n&1==1)
		{
			temp = func(count);
			if(temp == "")
				temp = "2";
			else
				temp = "2(" + temp + ")";
			if(ans=="")
				ans = temp;
			else
				ans = temp + '+' + ans;
		}
		n = n>>1;
		count++;
	}
	return ans;
}

int main()
{
	int ar[7] = {137, 1315, 73, 136, 255, 1384, 16385};
	int n;
	for(int i=0;i<7;i++)
	{
		n = ar[i];
		cout<<n<<'='<<func(n)<<'\n';
	}
	return 0;
}
