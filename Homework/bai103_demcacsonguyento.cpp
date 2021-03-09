#include<stdio.h>
#include<math.h>
#include<string.h>

int checkPrime(int n){
	if( n <= 1 ) return 0;
	if( n == 2 ) return 1;
	int i;
	for( i = 2 ; i <= sqrt(n) ; i++ ){
		if( n % i == 0 ) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int k = 1 ; k <= t ; k++ ){
		int n;
		scanf("%d",&n);
		int a[n],b[100000]={0};
		int i;
		for(i = 0; i < n ; i++ ){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		printf("Test %d:\n",k);
		for( i = 0 ; i < 100000 ; i++ ){
			if (b[i] >= 1 && checkPrime(i) == 1 ){
				printf("%d xuat hien %d lan",i, b[i]);
				printf("\n");
			}
		}
	}
	return 0;
}

