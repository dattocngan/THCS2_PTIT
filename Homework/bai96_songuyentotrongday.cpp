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
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for( int i = 0 ; i < n ; i++ ){
			scanf("%d",&a[i]);
		}
		for( int i = 0 ; i < n ; i++ ){
			if( checkPrime(a[i]) == 1 ) printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}

