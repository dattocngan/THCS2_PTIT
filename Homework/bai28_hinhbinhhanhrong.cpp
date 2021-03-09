#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for( i = 0 ; i < n ; i++ ){
		for( j = n - i - 2; j >= 0 ; j-- ){
			printf("~");
		}
		if( i == 0 || i == n - 1 ){
			for( j = 0 ; j < n ; j++ ){
				printf("*");
			}
		}else{
			for( j = 0 ; j < n ; j++ ){
				if( j == 0 || j == n - 1 ) printf("*");
				else printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}

