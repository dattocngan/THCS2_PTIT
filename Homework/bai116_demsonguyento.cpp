#include<stdio.h>
#include<math.h>

int checkPrime(int n){
	if(n <= 1) return 0;
	if( n == 2) return 1;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i ==0) return 0;
	}
	return 1;
}

int checkChuSo(int n){
	while(n>0){
		int a = n%10;
		if(checkPrime(a) == 0) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int count = 0;
		for(int i = a ; i <= b ; i++){
			if(checkPrime(i) == 1){
				if(checkChuSo(i) == 1) count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

