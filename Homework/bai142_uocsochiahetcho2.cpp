#include<stdio.h>
#include<math.h>
#include<string.h>
int main ()
{
	long long t;
	scanf("%lld",&t);
	while (t--)
	{
		long long n,d=0;
		scanf("%lld",&n);
		if (n%2==1) printf("0\n"); else
		{
		for (long long i=1;i<sqrt(n);i++)
		{
			if (n%i==0) 
			{
				if (i%2==0) d++;
				if ((n/i)%2==0) d++;
			}
		}
		if ((float)sqrt(n)-(int)sqrt(n)==0 &&(int)sqrt(n)%2==0) d++;
		printf("%lld\n",d);
	}
	}
	return 0;
}
