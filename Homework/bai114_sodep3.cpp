#include<stdio.h>
#include<math.h>
#include<string.h>

int isThuanNghich(long long n) {
    long long b = 0,j = 10, m = n;
    long long dem = 0, i, check = 0,sum = 0;
    while(n>0){
    	long long c = n % 10;
    	if(c == 6) check++;
        sum += c;
        b = b * 10 + c;
        n = n / 10;
    }
    if( check == 0 ) return 0;
    if( sum % 10 != 8 ) return 0;
	if( b != m ) return 0;
    return 1;
}

int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if( a > b ){
		long long temp = a;
		a = b;
		b = temp;
	}
	for(long long i = a; i <= b ; i++ ){
		if(isThuanNghich(i) == 1) printf("%lld ",i);
	}
	return 0;
}

