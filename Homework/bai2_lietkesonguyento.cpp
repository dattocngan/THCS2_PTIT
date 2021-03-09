#include<stdio.h>
#include<math.h>

int checkPrime(int n){
	if( n <= 1 ) return 0;
	if( n == 2 ) return 1;
	int i;
	for( i = 2 ; i <= sqrt(n) ; i++ ){
		if( n % i == 0 ) return 0;
	}
	return 1;
}

int main(){
	int n , count = 0;
	scanf("%d", &n);
	int a[n] , i;
	for( i = 0 ; i < n ; i++ ){
		scanf("%d", &a[i]);
		if( checkPrime(a[i]) == 1 ) count++;
	}
	printf("%d ", count);
	for( i = 0 ; i < n ; i++ ){
		if( checkPrime(a[i]) == 1 ) printf("%d ", a[i]);
	}
	return 0;
}

