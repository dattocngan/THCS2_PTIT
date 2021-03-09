#include<stdio.h>
#include<math.h>
#include<string.h>

long long tich(long long n){
	int i;
	long long tich = 1;
	for( i = 1 ; i <= n ; i++ ){
		tich *= i;
	}
	return tich;
}

int main(){
	long long n,sum=0;
	scanf("%lld",&n);
	long long i;
	for( i = 1 ; i <= n ; i++ ){
		sum += tich(i);
	}
	printf("%lld",sum);
	return 0;
}

