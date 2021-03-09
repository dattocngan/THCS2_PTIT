#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int k = 1 ; k <= t ; k++ ){
		int n , m , choose;
		scanf("%d%d%d",&n,&m,&choose);
		int a[n] , b[m];
		for( int i = 0 ; i < n ; i++ ){
			scanf("%d",&a[i]);
		}
		for( int i = 0 ; i < m ; i++ ){
			scanf("%d",&b[i]);
		}
		printf("Test %d:\n",k);
		for( int i = 0 ; i < n ; i++ ){
			printf("%d ",a[i]);
			if( i == choose - 1 ){
				for( int j = 0 ; j < m ; j++ ){
					printf("%d ",b[j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}

