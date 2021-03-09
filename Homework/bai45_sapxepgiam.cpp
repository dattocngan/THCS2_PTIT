#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, i ,j;
	scanf("%d",&n);
	int a[n];
	for( i = 0 ; i < n ; i++ ){
		scanf("%d",&a[i]);
	}
	for( i = 0 ; i < n - 1 ; i++ ){
		for( j = i ; j < n ; j++ ){
			if(a[j] < a[i]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for( i = n - 1 ; i >= 0 ; i-- ){
		printf("%d ",a[i]);
	}
	return 0;
}

