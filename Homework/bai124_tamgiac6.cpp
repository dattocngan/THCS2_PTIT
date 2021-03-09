#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	int k;
	for(int i = 1 ; i <= n ; i++ ){
		k = 2;
		for(int j = n ; j > i ; j-- ){
			printf("~");
		}
		for(int j = 0 ; j < i ; j++ ){
			printf("%d",k);
			k+=2;
		}
		k-=2;
		for(int j = i ; j > 1 ; j--){
			printf("%d",k-=2);
		}
		printf("\n");
	}
	return 0;
}

