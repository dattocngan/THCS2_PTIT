#include<stdio.h>
#include<math.h>
#include<string.h>

void tach(int n){
	int countChan = 0, countLe = 0;
	while( n!= 0){
		int a = n % 10;
		if( a % 2 == 0 ) countChan++;
		else countLe++;
		n /= 10;
	}
	printf("%d %d",countLe,countChan);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		tach(n);
		printf("\n");
	}
	return 0;
}

