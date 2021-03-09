#include<stdio.h>
#include<math.h>
#include<string.h>

int checkPrime(long long n){
	if( n <= 1 ) return 0;
	if( n == 2 ) return 1;
	int i;
	for( i = 2 ; i <= sqrt(n) ; i++ ){
		if( n % i == 0 ) return 0;
	}
	return 1;
}

long long Prime(int count){
	int dem = 0;
	long long i;
	for( i = 2 ; i <= 10000000 ; i++ ){
		if(checkPrime(i) == 1) dem++;
		if(dem == count) break;
	}
	return i;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int k = 1 ; k <= t ; k++ ){
		int n;
		scanf("%d", &n );
		printf("Test %d:\n",k);
		int i , j, row = n  , col = n , d = 1;
		int a[n+1][n+1];
		int x = 0 , b = 1, sum = 1, check = 0;
		int giatri = 1;
		while( d <= (n+1) / 2 ){
			for( i = d ; i <= col ; i++ ){
				if(check == 0 ){
					a[d][i] = Prime(giatri++);
					
				}else{
					a[d][i] = Prime(giatri++);
				}	
			} 
			for( i = d + 1 ; i <= row ; i++ ){
				a[i][col] = Prime(giatri++);
			} 
			for( i = col - 1 ; i >= d ; i-- ){
				a[row][i] = Prime(giatri++);
			} 
			for( i = row - 1 ; i > d  ; i-- ){
				a[i][d] = Prime(giatri++);
			} 
			d++ ; row-- ; col-- ;
		}
		for( i = 1 ; i <= n ; i++ ){
			for( j = 1 ; j <= n ; j++ ){
				printf("%d ", a[i][j] );
			}
			printf("\n");
		}
	}
	return 0;
}

