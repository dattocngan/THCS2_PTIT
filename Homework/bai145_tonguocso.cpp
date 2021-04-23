#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d",&t);
	long long tong=0;
	while(t--){
		int n;
		scanf("%d",&n);
		int p;
		while(n%2==0 ){
			tong +=2;
			n=n/2;
		}
		for( p=3;p<=sqrt(n);p+=2){
			while(n%p==0 ){
				tong +=p;
				n=n/p;
			}
		}
		if(n>1) tong+=n;
	}
	printf("%lld",tong);
}
