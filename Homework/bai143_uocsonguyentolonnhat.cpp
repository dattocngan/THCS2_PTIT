#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		long long s=2;
		for(int i=2;i<=sqrt(n);i++)
		{
			while(n%i==0)
			{
				s=i;
				n/=i;
			}
		}
		if(n>1)
		{
			if(n>s) s=n;
		}
		printf("%lld\n",s);
	}
}
