#include<stdio.h>
#include<math.h>
#include<string.h>

int checkFibo(int n){
	int a = 1, b = 1 , c = 0;
	if( n == 1 || n == 2 ) return 1;
	while(1){
		c = a + b;
		a = b;
		b = c;
		if(n < c) return 0;
		if(n == c) return 1;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	if(checkFibo(n) == 1) printf("1");
	else printf("0");
	return 0;
}

