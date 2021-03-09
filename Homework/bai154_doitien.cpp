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
		if (n>=1000)
		{
		d=d+n/1000; 
		n=n%1000;
		}
		if(n>=500)
		{
		d=d+n/500;  
		n=n%500;
	}
	if (n>=200)
	{
		d=d+n/200;  
		n=n%200;
} if(n>=100)
{
		d=d+n/100;  
		n=n%100;
}if (n>=50)
{
		d=d+n/50;   
		n=n%50;
} if(n>=20)
{
		d=d+n/20;   
		n=n%20;
}if (n>=10)
{
		d=d+n/10; 
		  n=n%10;
} if (n>=5)
{
		d=d+n/5; 
		   n=n%5;
} if (n>=2)
{
		d=d+n/2;
		n=n%2;
}
		d=d+n;
		printf("%lld\n",d);
	}
	return 0;
}
