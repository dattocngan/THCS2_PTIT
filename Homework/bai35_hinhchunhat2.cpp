#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k = m;
	for( i = 0 ; i < n ; i++ ){
		if( i > m - 1 ){
			printf("%d",i+1);
			int h = k;
			for( j = m - 1 ; j > 0  ; j-- ){
				printf("%d",h--);
			}
			k++;
			printf("\n");
			continue;
		}
		for( j = i + 1 ; j <= m ; j++ ){
			printf("%d",j);
		}
		for( j = m - 1 ; j > m - 1 - i; j-- ){
			printf("%d",j);
		}
		
		
		printf("\n");
	}
	return 0;
}

