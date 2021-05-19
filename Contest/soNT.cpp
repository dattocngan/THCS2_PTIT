#include<stdio.h>
#include<math.h>

int checkPrime(int n){
	if(n <= 1) return 0;
	if(n == 2) return 1;
	for(int i = 2 ; i<=sqrt(n) ; i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	int k, max = 0;
	for(int i= 0 ; i <n ; i++){
		int dem = 0;
		for(int j = 0 ; j< n ; j++){
			scanf("%d",&a[i][j]);
			if(checkPrime(a[i][j]) == 1) dem++;
		}
		if(dem > max){
			max = dem;
			k = i;
		}
	}
	printf("%d\n",k+1);
	for(int j = 0 ; j < n ; j++){
		if(checkPrime(a[k][j]) == 1) printf("%d ", a[k][j]);
	}
	
	return 0;
}

