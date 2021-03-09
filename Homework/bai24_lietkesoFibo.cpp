#include<stdio.h>
#include<math.h>
#include<string.h>

void checkFibo(int n){
	if( n == 1 ) printf("0");
	else if( n == 2 || n == 3 ) printf("0 1 1");
	else if( n == 4 ) printf("0 1 1 2");
	else{
		printf("0 1 1 2");
		int a = 1, b = 2 , c = 0 , count = 5;
		while(1){
			c = a + b;
			a = b;
			b = c;
			printf(" %d",c);
			if(count == n) break;
			count++;
		}
	}
	
}

int main(){
	int n;
	scanf("%d",&n);
	checkFibo(n);
	return 0;
}

