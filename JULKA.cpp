#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int test=10;
	while(test--)
	{
		char str[101],dif[101];    int num[101],diff[101];
		int flag=0;
		cin>>str;    cin>>dif;
		for(int k=0,j=strlen(str)-1;j>=0;k++,j--)
			num[j]=str[k]-48;
		
		for(int k=0,j=strlen(dif)-1;j>=0;k++,j--)
		diff[j]=dif[k]-48;
		
		if(strlen(str)==1)
		{
			if(num[0]==0)
		    {cout<<"0"<<endl<<"0"<<endl;  continue;}	
		}  
			
		if(num[0]%2!=0)
		flag=1;
		
		for(int j=strlen(str)-1;j>=0;j--)
		{
			int rem=num[j]%2;
			num[j]=num[j]/2;
			num[j-1]=rem*10+num[j-1];
		}
		
		for(int j=strlen(dif)-1;j>=0;j--)
		{
			int rem=diff[j]%2;
			diff[j]=diff[j]/2;
			diff[j-1]=rem*10+diff[j-1];
		}
		int q1[101],q2[101];
		for(int j=strlen(str)-1;j>=0;j--)
		{
			q1[j]=num[j];
			q2[j]=num[j];
		}
		
		if(flag==1)
		{
			++q1[0];
			if(q1[0]==10)
			{
				int m=0;
				while(q1[m]==10)
				{
					q1[m]=0;
					++q1[m+1];
					m=m+1;
				}
			}
		}
		int s;
		for(int j=0;j<strlen(dif);j++)          
		{                                                 
			q1[j]=q1[j]+diff[j];
			if(q1[j]>=10)
			{
				s=j;
				while(q1[s]>=10)
				{
					int rem=q1[s]/10;
					q1[s]=q1[s]%10;
					q1[s+1]=rem+q1[s+1];
					s=s+1;
				}
			}
		}         
		flag=3;
		int f;
		for(int f=0;f<strlen(dif);f++)
		{
			if(q2[f]<diff[f])
			{
				q2[f]=10+q2[f];
				--q2[f+1];
			}
			q2[f]=q2[f]-diff[f];
		}
		
		for(int j=0;j<strlen(str);j++)
		{
			if(q2[j]<0)
			{
				q2[j]=10+q2[j];
				--q2[j+1];
			}
		}
		
		
		for(int j=strlen(str)-1;j>=0;j--)
		{
		    	if(q1[j]!=0)
			flag=4;
			if(flag==4)
			cout<<q1[j]; 
		}
		cout<<endl;
		for(int j=strlen(str)-1;j>=0;j--)
		{
			if(q2[j]!=0)
			flag=5;
			if(flag==5)
			cout<<q2[j];
		}
		int go=0;
		for(int j=strlen(str)-1;j>=0;j--)
		{
			if(q2[j]!=0)
			{  go=2;  break;}
		
		}
		if(go==0)
		cout<<"0";
		cout<<endl;
		
		
	}
	return 0;
}
