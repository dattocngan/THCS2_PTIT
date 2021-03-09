#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a;
	int i,j;
	a = 65;
	for( i = 0 ; i < n ; i++ ){
		if( i > m ){
			for( j = m ; j > 0 ; j-- ){
				printf("%c",a+j-1);
			}
			printf("\n");
			continue;
		}
		for( j = i ; j < m ; j++ ){
			printf("%c",a+j);
		}
		for( j = i ; j > 0 ; j-- ){
			printf("%c",a+j-1);
		}
		printf("\n");
	}
	return 0;
}

