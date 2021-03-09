#include<stdio.h>
#include<math.h>
#include<string.h>

int check(long long n){
	int a = n % 10,count = 0 , b;
	n /= 10;
	while( n != 0 ){
		b = n % 10;
		if( b > a ) return 0;
		a = b;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(check(n) == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

