#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n, i;
	scanf("%d",&n);
	int a[n];
	for( i = 0 ; i < n ; i++ ){
		scanf("%d",&a[i]);
	}
	int choose;
	scanf("%d",&choose);
	for( i = n - choose ; i < n ; i++ ){
		printf("%d ",a[i]);
	}
	for( i = 0 ; i < n - choose ; i++ ){
		printf("%d ",a[i]);
	}
	return 0;
}

