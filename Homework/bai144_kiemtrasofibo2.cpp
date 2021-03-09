#include<stdio.h>
#include<math.h>
#include<string.h>

int checkFibo(long long n){
	long long a = 1, b = 1 , c = 0;
	if( n == 1 || n == 2 ) return 1;
	while(c<n){
		c = a + b;
		a = b;
		b = c;
		
	}
	if(n == c) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(checkFibo(n) == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

