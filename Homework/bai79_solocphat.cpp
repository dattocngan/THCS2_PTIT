#include<stdio.h>
#include<math.h>
#include<string.h>

int check(int n){
	while( n != 0 ){
		if( (n % 10) != 0 && (n % 10) != 6 && (n % 10) != 8 ) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if( check(n) == 1 ) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

