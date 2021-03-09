#include<stdio.h>
#include<math.h>
#include<string.h>
int mu(long long n)
{
	long long s=1;
	for (long long i=1;i<=n;i++) s=s*10;
	return s;
}
int tn(long long a )
{
	long long s=0,n=a,t=0;
	while (n>0)
	{
		t=t+n%10;
		s=s*10+n%10;
		n=n/10;
	}
	if (s==a && t%10==0) return 1; else return 0;
}
int main ()
{
	long long t;
	scanf("%lld",&t);
	while (t--)
	{
		long long n,d=0;	
		scanf("%lld",&n);	
		for (long long i=mu(n-1);i<mu(n);i++) if (tn(i)==1) d++;
		printf("%lld\n",d);
	}
	return 0;
}
