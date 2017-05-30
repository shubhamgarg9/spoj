#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	double a,b,c,d,ans,s;
	while(test--)
	{
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s = (a+b+c+d)/2;
		ans = sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%.2lf\n",ans);
	}
	return 0;
}
