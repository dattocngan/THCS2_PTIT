#include <stdio.h>

int main(){
	int n,i,j,len;
	scanf("%d", &n);
	len = n * 2 - 1;
	for( i = 0; i < len; i++){
		for( j = 0; j < len; j++){
			int min;
			if( i < j ){
				min = i;
			}else{
				min = j;
			}
			if( min >= len - i){
				min = len - i -1;
			}
			if( min >= len - j - 1){
				min = len - j -1;
			}
			printf("%d", n - min);
		}
		printf("\n");
	}
	return 0;
}
