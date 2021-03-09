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
	int i,count = 0;
	for( i = 2; i <= 10000000 ; i++ ){
		if( checkPrime(i) == 1 ){
			printf("%d\n",i);
			count++;
		} 
		if( count == n ) break;
	}
	return 0;
}

