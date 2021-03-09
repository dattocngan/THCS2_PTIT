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
	long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld\n%lld",ucnn(a,b),(a/ucnn(a,b))*b);
	return 0;
}

