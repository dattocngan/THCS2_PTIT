#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	for( int k = 1 ; k <= t ; k++ ){
		int n;
	    scanf("%d", &n);
	    int dem;
	    printf("Test %d: ",k);
	    for(int i = 2; i <= n; i++){
	    	dem = 0;
	        while(n % i == 0){
	        	dem++;
	            n /= i;
	        }
	        if(dem){
	            printf("%d(%d) ", i, dem);
	        }
	    }
	    printf("\n");
	}
	return 0;
}

