#include<stdio.h>
#include<math.h>

int check(int n){
	int c = n % 10;
	n/= 10;
	while(n > 0){
		int b = n % 10;
		if(b > c) return 0;
		int temp = b;
		b = c;
		c = temp;
		n/= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a1 = pow(10,n-1);
		int a2 = pow(10,n);
		for(int i = a1; i < a2 ; i++){
			if(check(i) == 1) printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}

