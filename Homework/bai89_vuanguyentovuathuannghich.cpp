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

int isThuanNghich(int n) {
    int a[20];
    int dem = 0, i;
    do {
        a[dem++] = (n % 10);
        n = n / 10;
    } while (n > 0);
    for (i = 0; i < (dem/2); i++) {
        if (a[i] != a[(dem - i - 1)]) {
            return 0;
        }
    }
    return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int count = 0;
		for( int i = a ; i <= b ; i++ ){
			if(isThuanNghich(i) == 1){
				if(checkPrime(i) == 1){
					printf("%d ",i);
					count++;
					if( count % 10 == 0 && count != 0 ) printf("\n");
				}
			}
		}
		printf("\n\n");
	}
	return 0;
}

