#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for( i = 0 ; i < n ; i++ ){
		if( i > m - 1 ){
			printf("%d",i+1);
			for( j = m - 2 ; j >= 0 ; j-- ){
				printf("%d",j+1);
			}
			printf("\n");
			continue;
		}
		for( j = i + 1 ; j <= m ; j++ ){
			printf("%d",j);
		}
		for( j = i - 1 ; j >= 0 ; j-- ){
			printf("%d",j+1);
		}
		
		
		printf("\n");
	}
	return 0;
}

