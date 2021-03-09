#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int k = 1 ; k <= t ; k++){
		int n;
		scanf("%d",&n);
		int a[n], b[n];
		for(int i = 0 ; i < n ; i++ ) scanf("%d",&a[i]);
		for(int i = 0 ; i < n ; i++ ) scanf("%d",&b[i]);
		for(int i = 0 ; i < n - 1 ; i++ ){
			for(int j = i + 1 ; j < n ; j++ ){
				if(a[j] < a[i]){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
			for(int j = i + 1 ; j < n ; j++ ){
				if(b[j] > b[i]){
					int temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
			}
		}
		printf("Test %d:\n",k);
		for(int i = 0 ; i < n ; i++ ){
			printf("%d %d ",a[i],b[i]);
		}
		printf("\n");
	}
	return 0;
}

