#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int k = 1 ; k <= t ; k++){
		int n;
		scanf("%d",&n);
		int a[n], count = 1 , max = 0;
		for(int i = 0 ; i < n ; i++ ){
			scanf("%d",&a[i]);
			if( i > 0){
				if(a[i] > a[i-1]){
					count++;
				}else count = 1;
			}
			if( count >  max ) max = count; 
		} 
		printf("Test %d:\n%d\n",k,max);
		for(int i = 0 ; i < n - 1 ; i++ ){
			int check = 1;
			int m = i;
			for(int j = i + 1 ; j < n ; j++ ){
				if(a[j] > a[m++]) check++;
				else break;
			}
			if(check == max){
				for(int k = i ;  ; k++){
					printf("%d ",a[k]);
					check--;
					if(check == 0) break;
				}
				printf("\n");
			}
		}
	}
	return 0;
}

