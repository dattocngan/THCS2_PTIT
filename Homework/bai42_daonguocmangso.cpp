#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for( i = 0 ; i < n ; i++ ){
		scanf("%d",&a[i]);
	}
	for( i = n - 1 ; i >= 0 ; i-- ){
		printf("%d ",a[i]);
	}
	return 0;
}

