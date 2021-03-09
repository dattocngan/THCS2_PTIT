#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	float c =(float)a/b;
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f",a+b,a-b,a*b,a/b,a%b,c);
	return 0;
}

