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

int isThuanNghich(char a[]) {
    for ( int i = 0; i < (strlen(a)/2); i++) {
        if (a[i] != a[(strlen(a) - i - 1)]) {
            return 0;
        }
        if(checkPrime(a[i]-'0') != 1 ) return 0;
    }
    return 1;
}


int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[500];
		gets(a);
		if( isThuanNghich(a) == 1 ){
			printf("YES\n");
		}else printf("NO\n");
	}
	return 0;
}

