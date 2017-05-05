#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a%10==0)
		cout<<'2';
	else
		cout<<"1\n"<<a%10;
	return 0;
}
