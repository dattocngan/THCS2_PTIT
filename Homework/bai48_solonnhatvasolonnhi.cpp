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
	printf("%d ",a[n-1]);
	i = n - 2;
	while(1){
		if(a[i] != a[n-1] ){
			printf("%d",a[i]);
			break;
		}
		i--; 
	}	
	return 0;
}

