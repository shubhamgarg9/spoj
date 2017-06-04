#include<iostream>
using namespace std;
int main()
{
	int W,n;
	cin>>W>>n;
	while(W!=0 || n!=0)
	{
		int w[n],val[n];
		int fun[n][W+1],cost = 0;
		
		for(int i=0;i<n;i++)
			cin>>w[i]>>val[i];
		
		for(int i=0;i<n;i++)
		for(int j=0;j<=W;j++)
		{
			fun[i][j] = 0;
			if(i==0)
			{
				if(j>=w[i])
					fun[i][j] = val[i];
			}
			else
			{
				if(j<w[i])
					fun[i][j] = fun[i-1][j];
				else
					fun[i][j] = max(val[i] + fun[i-1][j-w[i]],fun[i-1][j]);
			}
		}
		
		for(int i=0;i<=W;i++)
		if(fun[n-1][i]==fun[n-1][W])
		{
			cost = i;
			break;
		}
		
		cout<<cost<<' '<<fun[n-1][W]<<'\n';
		cin>>W>>n;
	}
	return 0;
}
