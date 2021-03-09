#include<stdio.h>
#include<math.h>
#include<string.h>

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
	int n;
	scanf("%d",&n);
	int i;
	for( i = 2; i < n ; i++ ){
		if( checkPrime(i) == 1 ) printf("%d\n",i);
	}
	return 0;
}

