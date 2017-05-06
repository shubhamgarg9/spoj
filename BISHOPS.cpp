#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[101];
	int ar[101];
	while(cin>>str)
	{
		for(int i=0;i<101;i++)
			ar[i]=0;
		int carry=0,flag=0;
		if(!strcmp(str,"0"))
		cout<<"0\n";
		else if(!strcmp(str,"1"))
		cout<<"1\n";
		else
		{
		for(int i=strlen(str)-1,j=0;i>=0;i--,j++)
			ar[j]=str[i]-48;
		if(str[0]-48>4)
			flag=1;
		for(int i=0;i<=strlen(str)-1;i++)
		{
			ar[i]=ar[i]*2+carry;
			carry=ar[i]/10;
			ar[i]=ar[i]%10;
		}
		int j=strlen(str);
		while(carry!=0)
		{
			ar[j]=carry;
			carry=ar[j]/10;
			ar[j]=ar[j]%10;
		}
		
		if(ar[0]==0)
		{
			ar[0]=8;
			int k=0;
			while(ar[++k]==0)
				ar[k]=9;
			ar[k]-=1;
		}
		else
		ar[0]-=2;
		for(int i=ar[strlen(str)]!=0?strlen(str):strlen(str)-1;i>=0;i--)
			cout<<ar[i];
		cout<<endl;
	}
	}
	return 0;
}
