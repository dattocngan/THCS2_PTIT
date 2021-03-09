#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n ,&m);
	int i , j;
	for( i = 0 ; i < n ; i++ ){
		for( j = 0 ; j < i ; j++ ){
			printf("~");
		}
		for( j = 0 ; j < m ; j++ ){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

