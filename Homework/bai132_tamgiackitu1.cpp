#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	char k = 97;
	for(int i = 1 ; i <= n ; i++ ){
		if( i % 2 == 1 ){
			k+= i - 1;
			for(int j = 0 ; j < i ; j++ ){
				printf("%c ",k++);
			}
		}else{
			k+= i - 1;
			for(int j = 0 ; j < i ; j++){
				printf("%c ",k--);
			}
			k++;
		}
		printf("\n");
	}
	return 0;
}
