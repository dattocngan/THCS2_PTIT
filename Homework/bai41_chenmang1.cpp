#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	int i,j;
	for( i = 0 ; i < n ; i++ ){
		scanf("%d",&a[i]);
	}
	for( i = 0 ; i < m ; i++ ){
		scanf("%d",&b[i]);
	}
	int choose;
	scanf("%d",&choose);
	for( i = 0 ; i < choose ; i++ ){
		printf("%d ",a[i]);
	}
	for( j = 0 ; j < m ; j++ ){
		printf("%d ",b[j]);
	}
	for( i = choose ; i < n ; i++ ){
		printf("%d ",a[i]);
	}	
	return 0;
}

