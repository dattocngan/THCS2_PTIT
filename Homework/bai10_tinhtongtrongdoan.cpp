#include<stdio.h>

int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if( a > b ){
		long long temp = a;
		a = b;
		b = temp;
	}
	printf("%lld",(a+b)*( (b-a) + 1 ) / 2);
	return 0;
}

