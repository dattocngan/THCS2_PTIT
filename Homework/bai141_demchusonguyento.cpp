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
	int b[100000]={0};
	scanf("%d",&n);
	while( n != 0 ){
		int c = n % 10;
		if(checkPrime(c) == 1){
			b[c]++;
		}
		n /= 10;
	}
	for(int i = 0 ; i < 100000 ; i++ ){
		if(b[i] >= 1){
			printf("%d %d\n",i,b[i]);
		}
	}
	return 0;
}

