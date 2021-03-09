#include<stdio.h>
#include<math.h>
#include<string.h>

int check(int n){
	int a,b = n % 10;
	while( n != 0 ){
		a = n % 10;
		n /= 10;
	}
	if(a == b) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if( check(n) ) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

