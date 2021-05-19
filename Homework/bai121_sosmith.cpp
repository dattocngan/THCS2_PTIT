#include<stdio.h>

int chuso(int n){
	int sum = 0;
	while(n>0){
		sum += n%10;
		n/=10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d",&n);
	int sum1 = chuso(n);
	int sum2 = 0;
	for(int i = 2; i <= n ; i++){
		while(n%i==0){
			sum2+= chuso(i);
			n/=i;
		}
	}
	if(sum1==sum2) printf("YES");
	else printf("NO");
	return 0;
}

