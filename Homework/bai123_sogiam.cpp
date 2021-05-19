#include<stdio.h>

int giam(int n){
	int c = n%10;
	n/=10;
	while(n > 0){
		int b = n % 10;
		if(b <= c) return 0;
		c = b;
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
		for(int i = a; i <= b ; i++){
			if(giam(i)==1) count++;
		}
		printf("%d\n",count);
	}
	return 0;
}

