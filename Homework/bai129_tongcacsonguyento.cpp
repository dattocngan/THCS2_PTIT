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
	int a[n][n], sum = 0,m = 0;
	for(int i = 0 ; i < n ; i++ ){
		for(int j = 0 ; j < n ; j++ ){
			scanf("%d",&a[i][j]);
			if( j >= m ){
				if(checkPrime(a[i][j]) == 1) sum += a[i][j];
			}
		}
		m++;
	}
	printf("%d",sum);
	
	return 0;
}


