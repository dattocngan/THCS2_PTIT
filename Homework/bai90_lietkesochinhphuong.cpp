#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
	long long a,b,d;
	scanf("%lld %lld",&a,&b);
	int count = 0;

	for ( long long i = sqrt(a) ; i <=sqrt(b) ; i++ )
	if (i*i>=a && i*i<=b) count++; 
	printf("%lld\n",count);
	for ( long long i = sqrt(a) ; i <=sqrt(b) ; i++ )
	if (i*i>=a && i*i<=b) printf("%lld\n",i*i);
	return 0;
}
