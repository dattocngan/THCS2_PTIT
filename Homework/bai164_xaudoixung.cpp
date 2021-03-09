#include<stdio.h>
#include<math.h>
#include<string.h>
int dx(char a[])
{
	long long d=0;
	for (long long i=0;i<strlen(a)/2;i++) if (a[i]!=a[strlen(a)-i-1]) d++;
	return d;
}
int main ()
{
	long long t;
	scanf("%lld\n",&t);
	while (t--)
	{
		char a[1000];
		gets(a);
		if (dx(a)==1|| (dx(a)==0 && strlen(a)%2==1) )printf("YES\n"); else printf("NO\n");
	}

	return 0;
}
