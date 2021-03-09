#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n, tich = 1,s = 2;
	    scanf("%lld", &n);
	    for(long long i = 2; i <= sqrt(n); i++){
	    	int check = 0;
	        while(n % i == 0){
	            n /= i;
	            s = i;
	            check++;
	        }
	        if(check != 0 ) tich *= i;
	    }
	    if( n > 1 ){
	    	if( n > s) tich *= n;
		}
	    printf("%lld\n",tich);
	}
	return 0;
}

