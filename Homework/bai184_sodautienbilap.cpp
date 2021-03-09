#include<stdio.h>


int main(){
	int t;
	scanf("%d",&t);
	while( t-- ){
		int n;
		scanf("%d",&n);
		long a[n] ,check = 0;
		for( int i = 0 ; i < n ; i++ ){
			scanf("%ld",&a[i]);
		}
		for( int i = 0 ; i < n - 1 ; i++ ){
			for( int j = i + 1 ; j < n ; j++ ){
				if( a[i] == a[j] ){
					printf("%ld",a[i]);
					check++;
					break;
				}
			}
			if( check != 0 ){
				break;
			}
		}
		if( check == 0 ) printf("NO");
		printf("\n");
	}
	return 0;
}
