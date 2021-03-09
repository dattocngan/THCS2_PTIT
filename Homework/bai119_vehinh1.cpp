#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++ ){
		int k = 1;
		for(int j = 0 ; j < 2*i + 1 ; j++ ){
			printf("%d",k++);
		}
		printf("\n");
	}
	return 0;
}

