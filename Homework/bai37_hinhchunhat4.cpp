#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j , k = m,count = 0;
	if( n > m ){
		for( i = n ; i > m ; i-- ){
			for( j = 0 ; j < m ; j++ ){
				printf("%d",i-j);
			}
			printf("\n");
			count++;
		}
	}
	for( i = 0 ; i < n - count ; i++ ){
		for( j = k ; j > 0 ; j-- ){
			printf("%d",j);
		}
		for( j = 0 ; j < i ; j++ ){
			printf("%d",j+2);
		}
		k--;
		
		printf("\n");
	}
	return 0;
}

