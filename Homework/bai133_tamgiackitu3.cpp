#include<stdio.h>
#include<math.h>
#include<string.h>
int main ()
{
	long long n,k=65,h=65;
	scanf("%lld",&n);
	long long d=n-1;
	for (long long i=1;i<=n;i++)
	{
		for (long long j=1;j<=i;j++) 
		{
			printf("%c ",h);
			h=h+d;
			d--;
		}
		k++;
		h=k;
		d=n-1;
		printf("\n");
	}
	return 0;
}
