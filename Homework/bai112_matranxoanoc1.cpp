#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n );
	int i , j, k = 1, row = n  , col = n , d = 1;
	int a[n+1][n+1];
	while( d <= (n+1) / 2 ){
		for( i = d ; i <= col ; i++ ) a[d][i] = k++;
		for( i = d + 1 ; i <= row ; i++ ) a[i][col] = k++;
		for( i = col - 1 ; i >= d ; i-- ) a[row][i] = k++;
		for( i = row - 1 ; i > d  ; i-- ) a[i][d] = k++;
		d++ ; row-- ; col-- ;
	}
	for( i = 1 ; i <= n ; i++ ){
		for( j = 1 ; j <= n ; j++ ){
			printf("%d ", a[i][j] );
		}
		printf("\n");
	}
}
