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

int sum(int n){
	int sum = 0;
	while(n != 0){
		sum += n % 10;
		n /= 10;
	}
	if(sum % 5 == 0) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	int count = 0;
	for(int i = 5 ; i <= n ; i++ ){
		if(sum(i) == 1){
			if(checkPrime(i) == 1){
				 printf("%d ",i);
				count++;
			}
		}
	}
	printf("\n%d",count);
	return 0;
}

