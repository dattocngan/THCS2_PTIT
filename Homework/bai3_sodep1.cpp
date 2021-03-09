#include<stdio.h>
#include<math.h>

int isPrime(int n){
	if( n <= 1 ) return -1;
	if( n == 2 ) return 1;
	int i;
	for( i = 2 ; i <= sqrt(n) ; i++ ){
		if( n % i == 0 ) return -1;
	}
	return 1;
}

int sum(int n){
	int sum = 0;
	while( n != 0 ){
		int a = n % 10;
		sum += a;
		n /= 10;
	}
	if( sum == 1 || sum == 2 || sum == 3 || sum == 5 || sum == 8 || sum == 13 || sum == 21 ) return 1;
	return -1;	
}

int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	if( a > b ){
		int temp = a;
		a = b;
		b = temp;
	}
	int i;
	for( i = a ; i <= b ; i++ ){
		if( sum(i) == 1 ){
			if( isPrime(i) == 1 ) printf("%d ",i);
		}
	}
	return 0;
}

