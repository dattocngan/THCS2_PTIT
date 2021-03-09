#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	int a = 65+n-2, b;
	int i,j;
	for( i = 0 ; i < n ; i++ ){
		b = a;
		for( j = n ; j > i ; j-- ){
			printf("%c",b);
			b++;
		}
		a--;
		printf("\n");
	}
	return 0;
}

