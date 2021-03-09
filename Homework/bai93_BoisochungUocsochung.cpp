#include<stdio.h>
#include<math.h>
#include<string.h>

long long ucnn(long long a, long long b){
	while(a != b){
		if( a > b ){
			a -= b;
		}else{
			b -= a;
		}
	}
	return a;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld\n",(a/ucnn(a,b))*b,ucnn(a,b));
	}
	return 0;
}

