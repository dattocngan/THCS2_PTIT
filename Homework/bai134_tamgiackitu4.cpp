#include<stdio.h>
#include<math.h>
#include<string.h>
int main ()
{
	long long n;
	scanf("%lld",&n);
	for (long long i=0;i<n;i++)
	{
		if (i==0) printf("@\n");else
		{
			printf("@");
			for (long long j=66;j<66+2*(i);j=j+2) printf("%c",j);
			for (long long j=66+2*(i-1)-2;j>=66;j=j-2) printf("%c",j);
			printf("@\n");
		}
	}
	return 0;
}
