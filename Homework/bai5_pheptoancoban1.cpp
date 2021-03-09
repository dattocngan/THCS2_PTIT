#include<stdio.h>

int main(){
	long long a ,b;
	scanf("%lld%lld", &a,&b);
	if( b == 0 ) printf("0");
	else{
		float thuong = (float)a / b;
		printf("%lld %lld %lld %.2f %lld",a+b,a-b,a*b,thuong,a%b);
	}
	return 0;
}

