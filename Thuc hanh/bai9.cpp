#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	    scanf("%d", &n);
	    for(int i = 2; i <= n; i++){
	        while(n % i == 0){
	            n /= i;
	            if(n < i ){
	            	printf("%d",i);
				}
	            else printf("%dx",i);
	        }
	    }
	return 0;
}

