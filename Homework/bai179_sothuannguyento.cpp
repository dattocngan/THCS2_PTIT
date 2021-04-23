#include<stdio.h>
#include<math.h>

int checkPrime(int n){
	if( n <= 1 ) return 0;
	if( n == 2 ) return 1;
	int i;
	for( i = 2 ; i <= sqrt(n) ; i++ ){
		if( n % i == 0 ) return 0;
	}
	return 1;
}

int tongChuSo(int n){
	int sum = 0;
	while(n != 0){
		int a = n % 10;
		if(checkPrime(a) == 0) return 0;
		sum += a;
		n/=10;
	}
	if(checkPrime(sum) == 1) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a > b){
			int temp = a;
			a = b;
			b = temp;
		}
		int count = 0;
		for(int i = a; i <= b ; i++){
			if(tongChuSo(i) == 1){
				if(checkPrime(i) == 1) count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

