#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	int k;
	for(int i = 1 ; i <= n ; i++ ){
		if( i % 2 == 0 ) k = 2;
		else k = 1;
		for(int j = 0 ; j < i ; j++ ){
			printf("%d",k);
			k+=2;
		}
		printf("\n");
	}
	return 0;
}

