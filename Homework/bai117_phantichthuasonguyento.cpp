#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d = ",n);
		for(int i = 2; i <= n ; i++){
			int count = 0;
			while(n%i == 0){
				count++;
				n/=i;
			}
			if(n == 1 && count > 0) printf("%d^%d",i,count);
			else if(count > 0) printf("%d^%d * ",i,count);
		}
		printf("\n");
	}
	return 0;
}

