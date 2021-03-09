#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	int k,m = n - 1;
	for(int i = 1 ; i <= n ; i++ ){
		m = n - 1;
		k = i;
		for(int j = 0 ; j < i ; j++ ){
			printf("%d ",k);
			k+= m--;
		}
		printf("\n");
	}
	return 0;
}

