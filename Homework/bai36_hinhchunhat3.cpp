#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j , k = m, x = m;
	for( i = 0 ; i < n ; i++ ){
		if( i > m - 1 ){
			printf("%d",i+1);
			int h = x;
			for( j = m - 1 ; j > 0  ; j-- ){
				printf("%d",h--);
			}
			x++;
			printf("\n");
			continue;
		}
		for( j = i ; j >= 0 ; j-- ){
			printf("%d",j+1);
		}
		for( j = 2 ; j <= k ; j++ ){
			printf("%d",j);
		}
		k--;
		printf("\n");
	}
	return 0;
}

