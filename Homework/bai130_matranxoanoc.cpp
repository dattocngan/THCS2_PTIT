#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n );
	int i , j, row = n  , col = n , d = 1;
	int a[n+1][n+1];
	int x = 0 , b = 1, sum = 1, check = 0;
	while( d <= (n+1) / 2 ){
		for( i = d ; i <= col ; i++ ){
			if(check == 0 ){
				a[d][i] = 0;
				check++;
			}else{
				a[d][i] = sum;
				sum = x + b;
				x = b;
				b = sum;
			}	
		} 
		for( i = d + 1 ; i <= row ; i++ ){
			a[i][col] = sum;
			sum = x + b;
			x = b;
			b = sum;
		} 
		for( i = col - 1 ; i >= d ; i-- ){
			a[row][i] = sum ;
			sum = x + b;
			x = b;
			b = sum;
		} 
		for( i = row - 1 ; i > d  ; i-- ){
			a[i][d] = sum ;
			sum = x + b;
			x = b;
			b = sum;
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
