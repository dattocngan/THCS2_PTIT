#include<stdio.h>

int main(){
	long long a;
	scanf("%lld",&a);
	long long dem=0 , b=a , c=a;
	while(a>0){
		a/=10;
		dem++;
	}
	long long n=dem-1, n1=dem-1, sum=1;
	if(b%10==0) {
		while(n--){
			b/=10;
		}
		while(n1--){
			sum=sum*10;
		}
		printf("%lld", c%sum+b);
	}
	else{
		while(n--){
			b/=10;
		}
		while(n1--){
			sum=sum*10;
		}
		printf("%lld",c%sum/10*10+b+c%10*sum);
	}
}
