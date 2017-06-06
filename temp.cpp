#include<iostream>
using namespace std;
int main()
{
	int *ar = new int[3];
	ar[0] =1;
	ar[1] = 2;
	ar[2] = 3;
	int *ar2 = ar;
	ar2[1] = 9;
	for(int i=0;i<3;i++)
		cout<<ar[i];
	for(int i=0;i<3;i++)
		cout<<ar2[i];
	return 0;
}
