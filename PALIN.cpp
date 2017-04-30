#include<iostream>
#include<cstring>
typedef long long int lli;
using namespace std;
char arr[1000002];
int ar[1000002];
void new_palin(lli k)
{
	
	if(k%2!=0)
	{
		int flag=0;
		lli half=k/2;
		lli l=half-1;
		lli m=half+1;
		lli p=l,r=m;
        for(;;)
        {
        	if(ar[p]==ar[r])
        	{
        		p--; r++;
			}
			
			if(ar[p]>ar[r])
			{
				flag=1;
				break;
			}
			if(ar[p]<ar[r])
			{
				flag=2;
				break;
			}
		}
		
		if(flag==1)
		{
			while(l!=-1)
			{
				ar[m]=ar[l];
				m++;   l--;
			}
		}
		if(flag==2)
		{
		//	lli n=l;
			ar[k/2]++;
			if(ar[k/2]==10)
			{
				lli o=k/2;
				while(ar[o]==10)
				{
					ar[o]=0;
					o--;
					ar[o]++;
				}
			}
			while(l!=-1)
			{
				ar[m]=ar[l];
				m++;   l--;
			}
		}
	}
	
	else
	{
		lli m=k/2,l=m-1,p=m,r=l;
		int flag=0;
		for(;l>=0;)
        {
        	if(ar[r]==ar[p])
        	{
        		r--; p++;
			}
			
			if(ar[r]>ar[p])
			{
				flag=1;
				break;
			}
			if(ar[r]<ar[p])
			{
				flag=2;
				break;
			}
		}
		if(flag==1)
		{
			while(l!=-1)
			{
				ar[m]=ar[l];
				m++;   l--;
			}
		
		}
		if(flag==2)
		{
			int n=l;
			ar[n]++;
			if(ar[n]==10)
			{
				while(ar[n]==10)
				{
					ar[n]=0;
				    n--;
				    ar[n]++;
				}
			}
			while(l!=-1)
			{
				ar[m]=ar[l];
				m++;   l--;
			}
		
		}
	}
	for(int q=0;q<k;q++)
	cout<<ar[q];
	cout<<endl;
}
void palin(lli k)
{
	int flag=1;
	for(lli i=0;i<k;i++)
	if(ar[i]!=9)
	flag=0;
	
	if(flag==1)
	{
		cout<<"1";
		for(int i=0;i<k-1;i++)
		cout<<"0";
		cout<<"1"<<endl;
	}
	
	else
	{
		if(k%2==0)
		{
			lli l=k/2,m=l-1;
			if(ar[m]==9)
			{
			while(ar[m]==9)
			{
				ar[m]=0; ar[l]=0;
				m--; l++;
			}
			ar[m]++; ar[l]++;
		    }
		    else
		    {
		    	ar[l]++;  ar[m]++;
			}
	    }
		else
		{
			if(ar[k/2]==9)
			{
				lli j=k/2,l=j-1,m=j+1;
				if(ar[j]==9)
				ar[j]=0;
				while(ar[l]==9)
				{
					ar[l]=0; ar[m]=0;
					l--; m++;
				}
				ar[l]++; ar[m]++;
			}
			else
			{
				ar[k/2]++;
			}
		}
		
		for(int i=0;i<k;i++)
		cout<<ar[i];
		cout<<endl;
	}
}



int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		cin>>arr;
		lli k=strlen(arr),flag=1;
	//	cout<<k;
		for(lli i=0;i<k;i++)
		ar[i]=arr[i]-48;
		for(lli i=0,j=k-1;i<k;i++,j--)
		if(ar[i]!=ar[j])
		{
			flag=0;
			break;
		}
		
		if(flag==1)
		palin(k);
		if(flag==0)
		new_palin(k);
	}
	return 0;
}
