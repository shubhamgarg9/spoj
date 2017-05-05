#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	while(num!=0)
	{
		int ar[num],show[num],service[num],top=1,top2=0;
		for(int i=1;i<=num;i++)
		cin>>ar[i];
		int i=1;
		while(i!=num+1)
		{
			if(service[top2]==show[top-1]+1)
			{
				show[top]=service[top2];
				top2--;
				top++;
				continue;
			}
			if(ar[i]==top)
			{
				show[top]=ar[i];
				top++;
				i++;
			}
			else
			{
				top2++;
				service[top2]=ar[i];
				i++;
			}
			
		}
		while(top2!=0)
		{
			show[top]=service[top2];
			top++;
			top2--;
		}
		
		int flag=0;
		for(int i=1;i<=num;i++)
		if(show[i]!=i)
		flag=1;
		if(flag==1)
		cout<<"no\n";
		else
		cout<<"yes\n";
		cin>>num;
	}
	return 0;
}
