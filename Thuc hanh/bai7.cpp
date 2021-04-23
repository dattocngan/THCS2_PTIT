#include<stdio.h>
#include<math.h>

int isPrime(int n){
	if( n < 2) return 0;
	if( n == 2 ) return 1;
	for(int i = 2 ; i <= sqrt(n) ; i++ ){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n],count = 0;
	for(int i = 0 ; i < n ; i++ ){
		scanf("%d",&a[i]);
		if(isPrime(a[i]) == 1) count++;
	}
	printf("%d", count);
	for(int i = 0 ; i < n ; i++ ){
		if(isPrime(a[i]) == 1) printf(" %d",a[i]);;
	}
	return 0;
}

