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
	int a[n][n], max = 0,m;
	for(int i = 0 ; i < n ; i++ ){
		int count = 0;
		for(int j = 0 ; j < n ; j++ ){
			scanf("%d",&a[i][j]);
			if(checkPrime(a[i][j]) == 1) count++;
		}
		if( count > max ){
			max = count;
			m = i;
		}
	}
	printf("%d\n",m+1);
	for(int j = 0 ; j < n ; j++ ){
		if(checkPrime(a[m][j]) == 1) printf("%d ",a[m][j]);
	}
	return 0;
}

