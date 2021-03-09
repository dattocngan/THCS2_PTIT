#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for( i = 0 ; i < n ; i++ ){
		for( j = 0 ; j < i ; j++ ){
			printf("~");
		}
		if( i == 0 || i == n - 1 ){
			for( j = 0 ; j < m ; j++ ){
				printf("*");
			}
		}else{
			for( j = 0 ; j < m ; j++ ){
				if( j == 0 || j == m - 1 ) printf("*");
				else printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}

