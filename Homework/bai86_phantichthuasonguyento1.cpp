#include<stdio.h>
#include<math.h>
#include<string.h>


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
	    scanf("%d", &n);
	    for(int i = 2; i <= n; i++){
	        while(n % i == 0){
	            n /= i;
	            printf("%d ",i);
	        }
	    }
	    printf("\n");
	}
	return 0;
}

