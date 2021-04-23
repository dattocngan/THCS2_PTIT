#include<stdio.h>
#include<math.h>
#include<string.h>
void sx(long long a[],long long l,long long h)
{
	long long i,j,x,tg;
	i=l;
	j=h;
	x=a[(l+h)/2];
	while (i<=j)
	{
		while (a[i]>x) i++;
		while (a[j]<x) j--;
		if (i<=j)
		{
			tg=a[i];
			a[i]=a[j];
			a[j]=tg;
			i++;
			j--;
		}	
	}
	if (i<h) sx(a,i,h);
	if (l<j) sx(a,l,j);
}
int main ()
{
	long long t;
	scanf("%lld",&t);
	while (t--)
	{
		long long n,k=0,i=0,l,r;
		scanf("%lld",&n);
		long long a[n];
		for (long long j=0;j<n;j++) scanf("%lld",&a[j]);
		sx(a,0,n-1);
		r=1;l=n-1;
		while( a[r]*a[r] + a[l]*a[l] != a[i]*a[i] && r != n - 1 ){
			if( a[r]*a[r] + a[l]*a[l] < a[i]*a[i] ){
				l--;
			}else if( a[r]*a[r] + a[l]*a[l] > a[i]*a[i] ){
				r++;
			}
			if( r == l ){
				l = n-1;
				i++;
				r = i + 1;
			}
		}
		if (r==n-1) printf("NO\n"); else printf("YES\n");
		
	}
	return 0;
}
