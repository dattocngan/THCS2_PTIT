#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a = 64, b = a, c, d;
	int i , j;
	if( n > m ){
		c = m;
		d = 0;
		for( i = 0 ; i < n ; i++ ){
			if( i < n - m ){
				for( j = 0 ; j < m ; j++ ){
					printf("%c",a+m);
				}
				printf("\n");
				continue;
			}
			for( j = c ; j <= m ; j++ ){
				printf("%c",a+j);
			}
			c--;
			for( j = d ; j < m - 1 ; j++ ){
				printf("%c",a+m);
			}
			d++;
			printf("\n");
		}
	}else{
		c = n;
		d = m-(m-n+1);
		for( i = 0 ; i < n ; i++ ){
			for( j = c ; j <= m ; j++ ){
				printf("%c",a+j);
			}
			c--;
			for( j = d ; j > 0 ; j-- ){
				printf("%c",a+m);
			}
			d--;
			printf("\n");
		}
	}
	return 0;
}

