#include<stdio.h>
#include<math.h>
#include<string.h>

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
		int giatri = n * n;
		while( d <= (n+1) / 2 ){
			for( i = d ; i <= col ; i++ ){
				if(check == 0 ){
					a[d][i] = giatri--;
					
				}else{
					a[d][i] = giatri--;
				}	
			} 
			for( i = d + 1 ; i <= row ; i++ ){
				a[i][col] = giatri--;
			} 
			for( i = col - 1 ; i >= d ; i-- ){
				a[row][i] = giatri--;
			} 
			for( i = row - 1 ; i > d  ; i-- ){
				a[i][d] = giatri--;
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

