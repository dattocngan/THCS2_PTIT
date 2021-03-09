#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a;
	int i,j;
	if( n > m ){
		for( i = 0 ; i < n ; i++ ){
			a = 96+n;
			if(i > m){
				for( j = 0 ; j < m ; j++ ){
					printf("%c",a);
					a--;
				}
				printf("\n");
				continue;
			}
			for( j = 0 ; j < i ; j++ ){
				printf("%c",a);
				a--;
			}
			for( j = i ; j < m ; j++ ){
				printf("%c",a);
			}
			printf("\n");
		}
	}else{
		for( i = 0 ; i < n ; i++ ){
			a = 96+m;
			for( j = 0 ; j < i ; j++ ){
				printf("%c",a);
				a--;
			}
			for( j = i ; j < m ; j++ ){
				printf("%c",a);
			}
			printf("\n");
		}
	}
	
	return 0;
}

