#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int stop = 1,num=1,den=2,first=2,second;
		cin>>second;
		if(second==2)
		{
			cout<<"TERM 2 IS 1/2\n";
			continue;
		}
		while(first<second)
		{
			stop = first;
			if(num!=1)
			{
				first += num;
				den = num + 1;
				num = 1;
			}
			else
			{
				first += den;
				num = den + 1;
				den = 1;
			}
		}
		if(num!=1)
			num--;
		else
			den--;
		int temp = den;
		den = num;
		num = temp;
		int hops = second - stop;
		int flag = 0,a=-1,b=-1;
		if(num==1)
		{
			a = num;
			b = den;
		}
		else
		{
			flag = 1;
			a = den;
			b = num;
		}
		a += hops;
		b -= hops;
		if(a==0)
			a++;
		if(b==0)
			b++;
		if(flag==0)
			cout<<"TERM "<<second<<" IS "<<a<<'/'<<b<<'\n';
		else
			cout<<"TERM "<<second<<" IS "<<b<<'/'<<a<<'\n';
	}
	return 0;
}
