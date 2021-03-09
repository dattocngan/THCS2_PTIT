#include<stdio.h>
#include<math.h>
#include<string.h>

long long fibo(int n){
	int count = 2;
	long long a = 1, b = 1, sum;
	if( n == 1 || n == 2 ) return 1;
	while( n != count ){
		sum = a + b;
		a = b;
		b = sum;
		count++;
	}
	return sum;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",fibo(n));
	}
	return 0;
}

