#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a = 64, b = a;
	int i , j;
	for( i = 0 ; i < n ; i++ ){
		if( i > m ){
			for( j = 0 ; j < m ; j++ ){
				printf("%c",a+m-1);
			}
			printf("\n");
			continue;
		}
		for( j = i ; j < m ; j++ ){
			printf("%c",b++);
		}
		b = a;
		b+= i + 1;
		for( j = 0 ; j < i ; j++ ){
			printf("%c",a+m-1);
		}
		printf("\n");
	}
	return 0;
}

