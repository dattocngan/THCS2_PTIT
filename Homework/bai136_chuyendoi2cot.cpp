#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i = 0 ; i < n ; i++ ){
		for(int j = 0 ; j < m ; j++ ){
			scanf("%d",&a[i][j]);
		}
	}
	int x,y;
	scanf("%d%d",&x,&y);
	for(int i = 0 ; i < n ; i++ ){
		int temp = a[i][x-1];
		a[i][x-1] = a[i][y-1];
		a[i][y-1] = temp;
	}
	for(int i = 0 ; i < n ; i++ ){
		for(int j = 0 ; j < m ; j++ ){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

