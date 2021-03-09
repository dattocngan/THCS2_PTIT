#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int countChan = 0, countLe = 0;
	while( n != 0 ){
		int a = n % 10;
		if( a % 2 == 0 ) countChan++;
		else countLe++;
		n /= 10;
	}
	printf("%d %d", countLe, countChan);
	return 0;
}

